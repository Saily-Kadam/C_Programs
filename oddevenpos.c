#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int evenSum = 0, oddSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    printf("Sum of even elements = %d\n", evenSum);
    printf("Sum of odd elements = %d\n", oddSum);

    return 0;
}