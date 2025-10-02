//c program to find third largest element from the array
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Array must contain at least 3 elements.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < n; i++) {
        int num = arr[i];

        if (num > first) {
            third = second;
            second = first;
            first = num;
        } else if (num > second && num < first) {
            third = second;
            second = num;
        } else if (num > third && num < second) {
            third = num;
        }
    }

    if (third == INT_MIN) {
        printf("There is no third distinct largest element.\n");
    } else {
        printf("The third largest element is: %d\n", third);
    }

    return 0;
}