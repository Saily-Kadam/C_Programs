/*Write a C program that:
1.Reads n floating-point numbers into a dynamically allocated array.
2.Uses a for loop with if–else if–else conditions to count how many numbers are:
-Greater than 100
-Between 0 and 100 (inclusive)
-Less than 0
3.Uses nested loops to print all triplets of elements from the array where the average of the triplet is greater 
than 50.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, k;
    int count_gt_100 = 0, count_0_100 = 0, count_lt_0 = 0;
    float *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (float *)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d float numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);

        if (arr[i] > 100)
            count_gt_100++;
        else if (arr[i] >= 0 && arr[i] <= 100)
            count_0_100++;
        else
            count_lt_0++;
    }
   
    printf("\nGreater than 100: %d\n", count_gt_100);
    printf("Between 0 and 100: %d\n", count_0_100);
    printf("Less than 0: %d\n", count_lt_0);

    printf("\nTriplets with average > 50:\n");
    for (i = 0; i < n - 2; i++) {
        for (j = i + 1; j < n - 1; j++) {
            for (k = j + 1; k < n; k++) {
                float avg = (arr[i] + arr[j] + arr[k]) / 3;
                if (avg > 50) {
                    printf("(%f, %f, %f) -> Avg: %.2f\n", arr[i], arr[j], arr[k], avg);
                }
            }
        }
    }

    free(arr);
    return 0;
}