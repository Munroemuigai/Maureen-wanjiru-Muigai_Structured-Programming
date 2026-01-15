#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int count = 0;
int head = 0;

void insertSample(int value) {
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;
    if (count < BUFFER_SIZE) {
        count++;
    }
}


void printSamples() {
    if (count == 0) {
        printf("Buffer is empty.\n");
        return;
    }

    printf("Stored samples (oldest → newest): ");
    int start = (head - count + BUFFER_SIZE) % BUFFER_SIZE; // Oldest element
    for (int i = 0; i < count; i++) {
        int index = (start + i) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
    }
    printf("\n");
}

int main() {
    int value;
    char choice;

    printf("Circular Data Logger (BUFFER_SIZE = %d)\n", BUFFER_SIZE);
    printf("Enter sensor values continuously. Type 'p' to print, 'q' to quit.\n");

    while (1) {
        printf("Input (number / p / q): ");
        if (scanf("%d", &value) == 1) {
            insertSample(value);
        } else {
            scanf("%c", &choice);
            if (choice == 'p') {
                printSamples();
            } else if (choice == 'q') {
                printf("Exiting logger.\n");
                break;
            }
        }
        fflush(stdin);
    }

    return 0;
}
