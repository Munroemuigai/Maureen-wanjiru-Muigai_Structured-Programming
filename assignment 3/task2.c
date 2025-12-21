#include <stdio.h>

int main() {
    int num = 10;          // Declare and initialize integer variable
    int *ptr;              // Declare integer pointer

    ptr = &num;            // Store address of num in ptr

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void *)&num);
    printf("Value stored in ptr (address of num): %p\n", (void *)ptr);
    printf("Value accessed using *ptr: %d\n", *ptr);

    return 0;
}
