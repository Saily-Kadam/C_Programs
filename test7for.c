//write a program that asks the user for a number N and then prints a simple "count down pattern" 
//from N down to 1, but all on one line separated by dashes using for loop 
#include <stdio.h>

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Countdown using for loop: ");
    for (int i = N; i >= 1; i--) {
        printf("%d", i);
        if (i > 1) {
            printf("-");
        }
    }
    printf("\n");

    return 0;
}