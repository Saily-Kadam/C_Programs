#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int sum = 0, total;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter %d elements (from 1 to %d with one missing):\n", n - 1, n);
    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;

    printf("Missing number = %d\n", total - sum);

    return 0;
}