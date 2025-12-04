#include <stdio.h>

int findMax(int arr[], int n);
int findMin(int arr[], int n);

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Largest element = %d\n", findMax(arr, n));
    printf("Smallest element = %d\n", findMin(arr, n));

    return 0;
}

int findMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];
    return max;
}

int findMin(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] < min)
            min = arr[i];
    return min;
}