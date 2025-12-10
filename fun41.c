#include <stdio.h>

int linearSearch(int arr[], int n, int key);

int main() {
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to search: ");
    scanf("%d", &key);

    int index = linearSearch(arr, n, key);

    if(index == -1)
        printf("Element not found.\n");
    else
        printf("Element found at position %d.\n", index + 1);

    return 0;
}

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++)
        if(arr[i] == key)
            return i;  // index found
    return -1;          // not found
}