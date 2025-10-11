#include <stdio.h>  // Fixed typo in header file

int main() {
    char Name[50];
    int Age = 0;

    printf("Enter your name: ");
    scanf("%s", Name);  // Note: This reads one word only

    printf("Enter your age: ");
    scanf("%d", &Age);  // Use & (address-of) operator to store input

    printf("- - - - - -\n");
    printf("Hello %s\n", Name);  // Use the variable directly
    printf("Age = %d\n", Age);

    return 0;  // Good practice to include return 0
}