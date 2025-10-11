#include <stdio.h>

int main() {
    float H, W, area;

    // รับค่าความสูงจากผู้ใช้
    printf("H = ");
    scanf("%f", &H);

    // รับค่าฐานจากผู้ใช้
    printf("W = ");
    scanf("%f", &W);

    // คำนวณพื้นที่สามเหลี่ยม
    area = (H * W) / 2;

    // แสดงผลลัพธ์
    printf("Area = %.1f\n", area);

    return 0;
}
