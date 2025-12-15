#include <stdio.h>

int main() {
    int a[50], freq[50];
    int n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }

    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            count = 1;
            for (j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count;
        }
    }

    printf("Element  Frequency\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0)
            printf("%d\t%d\n", a[i], freq[i]);
    }

    return 0;
}