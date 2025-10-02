/*write a c program to read n integers into a dynamically allocated array. Then count the number of good pairs in this array.
 A pair (i, j) is called good if arr[i] == arr[j] and i<j.*/
 #include <stdio.h>
#include <stdlib.h>

int countGoodPairs(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = countGoodPairs(arr, n);
    printf("Number of good pairs: %d\n", result);

    free(arr);

    return 0;
}