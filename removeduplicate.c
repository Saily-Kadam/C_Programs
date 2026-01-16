#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if(n == 0)
        return 0;

    int index = 1;

    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[i - 1])
            arr[index++] = arr[i];
    }
    return index;
}

int main() {
    int arr[] = {0,0,1,1,1,2,2,3,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newLength = removeDuplicates(arr, n);

    printf("New length = %d\nArray: ", newLength);
    for(int i = 0; i < newLength; i++)
        printf("%d ", arr[i]);

    return 0;
}