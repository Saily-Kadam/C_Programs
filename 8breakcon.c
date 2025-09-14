//Print the smallest number less than or equal to N that is divisible by both 4 and 6.
#include <stdio.h>

int main() {
    int N;
    printf("Enter a number N: ");
    scanf("%d", &N);

    int result = N - (N % 12); 

    printf("The smallest number ≤ %d divisible by both 4 and 6 is: %d\n", N, result);

    return 0;
}