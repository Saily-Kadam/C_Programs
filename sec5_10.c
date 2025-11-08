// Dynamically allocate and read an array of size n. Move all zeros to the end of an array
//without changing the order of non-zero elements.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int* arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Move non-zero elements forward
    for (i = 0; i < n; i++) {
        if (arr[i] != 0)
            arr[j++] = arr[i];
    }

    // Fill remaining elements with zero using for loop
    for (i = j; i < n; i++)
        arr[i] = 0;

    printf("Array after moving zeros to end:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}