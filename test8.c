//Write a program that asks the user for a number N and then prints all numbers from 1 to N, classifying each 
//number as:
//Even and multiple of 4 
//Even but not a multiple of 4
//Odd using for loop
#include <stdio.h>

int main() {
    int N;

    // Ask the user for input
    printf("Enter a number N: ");
    scanf("%d", &N);

    printf("\nClassification of numbers from 1 to %d:\n", N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            if (i % 4 == 0) {
                printf("%d - Even and multiple of 4\n", i);
            } else {
                printf("%d - Even but not a multiple of 4\n", i);
            }
        } else {
            printf("%d - Odd\n", i);
        }
    }

    return 0;
}