//insertion sort
#include <stdio.h>

// Function to perform Insertion Sort
void insertionSort(int array[], int n) {
    for (int i = 1; i < n; i++) {
        int key = array[i];
        int j = i - 1;

        // Move elements of array[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
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
    int array[] = {9, 5, 1, 4, 3};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Original array:\n");
    printArray(array, n);

    insertionSort(array, n);

    printf("Sorted array:\n");
    printArray(array, n);

    return 0;
}