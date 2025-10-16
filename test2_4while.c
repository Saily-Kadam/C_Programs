/*Write a program that asks the user for a number N and then prints all numbers from 1 to N, classify each number
as:
-Even and multipe of 4
-Even but not a multiple of 4
Odd using while loop*/
#include <stdio.h>

int main() {
    int N, i = 1;

    printf("Enter a number N: ");
    scanf("%d", &N);
    while (i <= N) {
        if (i % 2 == 0) { 
            if (i % 4 == 0) {
                printf("%d is Even and multiple of 4\n", i);
            } else {
                printf("%d is Even but not a multiple of 4\n", i);
            }
        } else {
            printf("%d is Odd\n", i);
        }
        i++;
    }

    return 0;
}