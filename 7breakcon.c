//Print numbers from 1 to N, but skip those that end in 5 using continue. 
#include <stdio.h>

int main() {
    int N;
    printf("Enter a number N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 10 == 5) {
            continue; 
        }
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}