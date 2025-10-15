/*Write a program that asks the user for a number N and then prints all numbers from 1 to N, classify each number
as:
-Even and multipe of 4
-Even but not a multiple of 4
Odd using for loop*/
#include <stdio.h>

int main() {
    int N, i;

    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("%d: ", i);
        if (i % 2 == 0) {
            if (i % 4 == 0) {
                printf("Even and multiple of 4\n");
            } else {
                printf("Even but not a multiple of 4\n");
            }
        } else {
            printf("Odd\n");
        }
    }

    return 0;
}