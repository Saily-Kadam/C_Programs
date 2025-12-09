#include <stdio.h>

int sumArray(int arr[], int n);

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int sum = sumArray(arr, n);
    printf("Sum of elements = %d\n", sum);

    return 0;
}

int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}