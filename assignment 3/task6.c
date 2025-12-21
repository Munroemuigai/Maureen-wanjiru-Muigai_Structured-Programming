#include <stdio.h>

/* Function using pass by value */
void incrementByValue(int x) {
    x = x + 1;
}

/* Function using pass by reference */
void incrementByReference(int *x) {
    *x = *x + 1;
}

int main() {
    int number = 10;

    /* Pass by value */
    incrementByValue(number);
    printf("After pass by value: %d\n", number);

    /* Pass by reference */
    incrementByReference(&number);
    printf("After pass by reference: %d\n", number);

    return 0;
}
