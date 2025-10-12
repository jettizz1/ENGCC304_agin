#include <stdio.h>
#include <stdio.h>
int main() {
    int N;

    // รับค่าจากผู้ใช้
    printf("Enter value:\n");
    scanf("%d", &N);

    printf("Series: ");

    // กรณีเลขคี่
    if (N % 2 == 1) {
        for (int i = 1; i <= N; i += 2) {
            printf("%d ", i);
        }
    }
    // กรณีเลขคู่
    else {
        for (int i = N; i >= 0; i -= 2) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
