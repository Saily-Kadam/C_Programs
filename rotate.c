//rotate the array by k steps
#include <stdio.h>

int main() {
    int arr[100], rotated[100];
    int n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of rotations (k): ");
    scanf("%d", &k);
    k = k % n;

    for(i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    printf("Array after rotating to the right by %d steps:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}