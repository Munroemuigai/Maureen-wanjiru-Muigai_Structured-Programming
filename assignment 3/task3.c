#include <stdio.h>

int main() {
    int count = 10;        // Declare and initialize variable
    int *pCount;           // Declare pointer

    pCount = &count;       // Assign address of count

    *pCount = 25;          // Modify value using pointer

    printf("Updated value of count: %d\n", count);

    return 0;
}
