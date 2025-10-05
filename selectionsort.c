//selection sort
#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // Find the index of the minimum element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        if (minIndex != i) {
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}

// Function to print the array
void printArray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {64, 25, 12, 22, 11};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Original array:\n");
    printArray(array, n);

    selectionSort(array, n);

    printf("Sorted array:\n");
    printArray(array, n);

    return 0;
}