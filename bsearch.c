#include <stdio.h>

int binarySearch(int arr[], int n, int key);

int main() {
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements in sorted order:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int pos = binarySearch(arr, n, key);

    if(pos == -1)
        printf("Element not found.\n");
    else
        printf("Element found at position %d.\n", pos + 1);

    return 0;
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}