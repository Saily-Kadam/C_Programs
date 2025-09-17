/*Write a C program that:
1. Reads n integers into a dynamically allocated array.
2. Uses a loop to calculate the average of the elements in the array.
3. Prints the average.
Note : If your roll number is even solve using for loop, else make use of while loop.
Example Input:
5
10 20 30 40 50
Example Output:
The average of the array elements is: 30*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory
    int *arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    int i = 0;
    while (i < n) {
        scanf("%d", &arr[i]);
        i++;
    }

    int sum = 0;
    i = 0;
    while (i < n) {
        sum += arr[i];
        i++;
    }

    double avg = (double)sum / n;
    printf("The average of the array elements is: %.2lf\n", avg);

    free(arr);
    return 0;
}