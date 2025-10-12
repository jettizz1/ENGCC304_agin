#include <stdio.h>
#include <stdio.h>
int main() {
    int num1, num2, num3, sum;

    // รับค่าตัวเลข 3 ค่าในบรรทัดเดียว
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // คำนวณผลรวม
    sum = num1 + num2 + num3;

    // แสดงผลลัพธ์
    printf("Answer = %d\n", sum);

    return 0;
}
