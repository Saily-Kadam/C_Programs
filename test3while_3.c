/*Write a c program that:
1.raeds n integers into a dynamically allocated array.
2. Uses a loop to calculate the average of the elements in the array.
3. Printd the average using a while loop*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, sum = 0;
    float avg = 0.0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements in the array:\n");
    int i = 0;
    while (i < n) {
        scanf("%d", &arr[i]);
        i++;
    }
    i = 0;
    while (i < n) {
        sum += arr[i];
        i++;
    }

    avg = (float)sum / n;
    i = 0;
    while (i < 1) {
        printf("The average of array elements is: %.2f\n", avg);
        i++;
    }

    free(arr);
    return 0;
}