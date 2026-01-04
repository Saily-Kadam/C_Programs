#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int arr[100];
    int largest = INT_MIN, second = INT_MIN;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (n < 2) {
        printf("Second largest element not possible\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        printf("No second largest element\n");
    else
        printf("Second largest element is %d\n", second);

    return 0;
}