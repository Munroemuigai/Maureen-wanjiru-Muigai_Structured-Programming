#include <stdio.h>

// Function to swap two numbers using pointers
void swapNumbers(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    swapNumbers(&a, &b);   // Pass addresses of a and b

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
