#include <stdio.h>

int main() {
    int num1 = 15, num2 = 20;
    int *ptr1, *ptr2;
    int sum;

    ptr1 = &num1;          // Assign address of num1
    ptr2 = &num2;          // Assign address of num2

    sum = (*ptr1) + (*ptr2);   // Add values using dereferencing

    printf("Sum of num1 and num2: %d\n", sum);

    return 0;
}
