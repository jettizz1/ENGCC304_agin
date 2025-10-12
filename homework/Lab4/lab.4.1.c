#include <stdio.h>

int main() {
    int days;
    long long seconds;

    // รับค่าจำนวนวันจากผู้ใช้
    printf("Input Days : ");
    scanf("%d", &days);

    // คำนวณวินาที: 1 วัน = 24 ชั่วโมง = 86400 วินาที
    seconds = (long long)days * 24 * 60 * 60;

    // แสดงผลลัพธ์
    printf("%d days = %lld seconds\n", days, seconds);

    return 0;
}
