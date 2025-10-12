#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void formatSalary(double salary, char *output) {
    char temp[50];
    int intPart = (int)salary;               // ส่วนเต็ม
    int decimalPart = (int)((salary - intPart) * 100 + 0.5); // ทศนิยม 2 หลัก ปัดเศษ

    char intStr[30];
    int len, commaCount = 0;

    // แปลง int เป็น string
    sprintf(intStr, "%d", intPart);
    len = strlen(intStr);

    // ใส่ comma ย้อนหลังจากขวา → ซ้าย
    for (int i = len - 1, j = 0; i >= 0; i--, j++) {
        temp[j + commaCount] = intStr[i];
        if ((j + 1) % 3 == 0 && i != 0) {
            commaCount++;
            temp[j + commaCount] = ',';
        }
    }

    temp[len + commaCount] = '\0';

    // กลับลำดับ string เพื่อให้ถูกต้อง
    int finalLen = strlen(temp);
    for (int i = 0; i < finalLen / 2; i++) {
        char ch = temp[i];
        temp[i] = temp[finalLen - i - 1];
        temp[finalLen - i - 1] = ch;
    }

    // รวมกับทศนิยมและใส่ใน output
    sprintf(output, "%s.%02d", temp, decimalPart);
}

int main() {
    char employeeID[11];  // รับได้สูงสุด 10 ตัวอักษร
    int workingHours;
    float salaryPerHour;
    double totalSalary;
    char formattedSalary[50];

    // รับข้อมูลจากผู้ใช้
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%10s", employeeID);

    printf("Input the working hrs: ");
    scanf("%d", &workingHours);

    printf("Salary amount/hr: ");
    scanf("%f", &salaryPerHour);

    // คำนวณเงินเดือนรวม
    totalSalary = workingHours * salaryPerHour;

    // จัดรูปแบบเงินเดือน
    formatSalary(totalSalary, formattedSalary);

    // แสดงผล
    printf("Employees ID = %s\n", employeeID);
    printf("Salary = U$ %s\n", formattedSalary);

    return 0;
}

