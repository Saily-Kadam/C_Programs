//Dynamically allocate and read an array of size n. Separate positive and negative
//numbers into two arrays.
#include <stdio.h>   // For input/output functions
#include <stdlib.h>  // For malloc() and free()

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);  // Read the size of the array

    int* arr = (int*)malloc(n * sizeof(int));
     printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read elements into main array
    }
int* pos = (int*)malloc(n * sizeof(int));  
    int* neg = (int*)malloc(n * sizeof(int));
    int posCount = 0, negCount = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {          // If number is positive or zero
            pos[posCount++] = arr[i];  // Add to positive array and increment counter
        } else {                     // If number is negative
            neg[negCount++] = arr[i];  // Add to negative array and increment counter
        }
    }
printf("Positive numbers: ");
    for (int i = 0; i < posCount; i++) {
        printf("%d ", pos[i]);
    }
    printf("\n");

    // Print negative numbers
    printf("Negative numbers: ");
    for (int i = 0; i < negCount; i++) {
        printf("%d ", neg[i]);
    }
    printf("\n");

    // Free all dynamically allocated memory
    free(arr);
    free(pos);
    free(neg);

    return 0;
}