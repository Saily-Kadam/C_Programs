#include <stdio.h>

int maxSubArray(int arr[], int n) {
    int maxSoFar = arr[0];
    int currentMax = arr[0];

    for(int i = 1; i < n; i++) {
        if(currentMax < 0)
            currentMax = arr[i];
        else
            currentMax += arr[i];

        if(currentMax > maxSoFar)
            maxSoFar = currentMax;
    }
    return maxSoFar;
}

int main() {
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum Subarray Sum = %d\n", maxSubArray(arr, n));

    return 0;
}