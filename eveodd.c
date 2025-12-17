#include <stdio.h>

void countEvenOdd(int arr[], int n, int *even, int *odd);

int main() {
    int n, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    countEvenOdd(arr, n, &even, &odd);

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}

void countEvenOdd(int arr[], int n, int *even, int *odd) {
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}