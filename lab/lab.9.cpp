#include <stdio.h>
#include <stdbool.h>

// ฟังก์ชันตรวจสอบจำนวนเฉพาะ
bool isprime(int n) {
    if (n <2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
        return false;
    }
    return true;
}
int main () {
    int N;
    printf("Enter n :\n");
    scanf("%d",&N);
    int arr[N];
    //รับค่าจากผู้ใช้
    for  (int i = 0; i <N; i++) {
        printf("Enter value[%d] :\n",i);
        scanf("%d", &arr[i]);
    }
    
    //แสดง Index
    printf("Index: ");
    for (int i= 0; i < N; i++) {
        printf(" %d ", i);
    }
    printf("\n");
    
    //แสดง Array โดยแสดงเฉพาะจำนวนเฉพาะ
    printf("Array:");
    for (int i = 0; i < N; i++) {
        if (isprime(arr[i])) {
            printf("%d", arr[i]);
    } else {
        printf(" # ");
    }
}

printf("\n");
return 0;
}
