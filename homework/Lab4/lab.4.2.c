#include <stdio.h>

int main() {
    char employeeID[11];   // รับรหัสพนักงานสูงสุด 10 ตัว + '\0'
    int workingHours;
    float salaryPerHour, totalSalary;

    // รับข้อมูลจากผู้ใช้
    printf("Input the Employees ID(Max. 10 chars):\n");
    scanf("%10s", employeeID);  // จำกัดไม่เกิน 10 ตัวอักษร

    printf("Input the working hrs:\n");
    scanf("%d", &workingHours);

    printf("Salary amount/hr:\n");
    scanf("%f", &salaryPerHour);

    // คำนวณเงินเดือนรวม
    totalSalary = workingHours * salaryPerHour;

    // แสดงผลลัพธ์
    printf("Employees ID = %s\n", employeeID);
    printf("Salary = U$ %.2f\n", totalSalary);

    return 0;
}
