#include <stdio.h>

int main() {
    int n;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int start = 0;
    int end = n - 1;

    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}