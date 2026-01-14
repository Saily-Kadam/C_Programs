#include <stdio.h>

void moveZeroes(int arr[], int n) {
    int index = 0;

    // Move non-zero elements forward
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0)
            arr[index++] = arr[i];
    }

    // Fill remaining positions with zero
    while(index < n)
        arr[index++] = 0;
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeroes(arr, n);

    printf("Array after moving zeroes:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}