/*Write a C program that:
1. Reads n integers into a dynamically allocated array.
2. Uses a for loop with if–else if–else conditions to count how many numbers are:
-Even
-Odd
-Divisible by both 2 and 3
3. Uses nested loops to print all pairs of elements in the array where the product of the pair is a
 multiple of 10.*/
 #include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    int count_even = 0, count_odd = 0, count_div_2_3 = 0;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            count_even++;
        else
            count_odd++;

        if (arr[i] % 2 == 0 && arr[i] % 3 == 0)
            count_div_2_3++;
    }
    printf("\nEven numbers: %d\n", count_even);
    printf("Odd numbers: %d\n", count_odd);
    printf("Divisible by both 2 and 3: %d\n", count_div_2_3);

    printf("\nPairs with product divisible by 10:\n");
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            int product = arr[i] * arr[j];
            if (product % 10 == 0) {
                printf("(%d, %d) -> Product: %d\n", arr[i], arr[j], product);
            }
        }
    }

    free(arr);
    return 0;
}