#include <stdio.h>
#include <limits.h>

int secondLargest(int arr[], int n) {
    int largest = INT_MIN, second = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = secondLargest(arr, n);

    if(result == INT_MIN)
        printf("Second largest does not exist.\n");
    else
        printf("Second largest element = %d\n", result);

    return 0;
}