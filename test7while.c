//write a program that asks the user for a number N and then prints a simple "count down pattern" 
//from N down to 1, but all on one line separated by dashes using while loop 
#include <stdio.h>

int main() {
    int N;

    printf("Enter a number: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Countdown using while loop: ");
    int i = N;
    while (i >= 1) {
        printf("%d", i);
        if (i > 1) {
            printf("-");
        }
        i--;
    }
    printf("\n");

    return 0;
}