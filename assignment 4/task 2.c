#include <stdio.h>

int main(void)
{
    int n;

    printf("Input the number of elements to be stored in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];
    int sum = 0;

    printf("Input %d elements in the array:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);   // starts from index 0
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }

        sum += arr[i];
    }

    printf("Sum of all elements stored in the array is: %d\n", sum);
    return 0;
}

