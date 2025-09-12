//Print numbers from 1 to N, skipping numbers that are divisible by 3. 
#include <stdio.h>

int main() {
    int N;
    printf("Enter a number N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0) {
            continue;
        }
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}