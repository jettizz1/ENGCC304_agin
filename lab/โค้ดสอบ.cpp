#include <stdio.h>

int main() {
    int n;

    // รับค่าจากผู้ใช้
    printf("Enter Number: ");
    scanf("%d", &n);

    // ตรวจสอบจาก n ถึง 2 (มาก -> น้อย)
    for (int num = n; num >= 2; num--) {
        int isPrime = 1; // กำหนดให้เป็นจำนวนเฉพาะโดยเริ่มต้น

        // ตรวจสอบว่า num เป็นจำนวนเฉพาะหรือไม่
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0; // ไม่ใช่จำนวนเฉพาะ
                break;
            }
        }

        // ถ้าเป็นจำนวนเฉพาะ ให้แสดงผล
        if (isPrime) {
            printf("%d\n", num);
        }
    }

    return 0;
}
