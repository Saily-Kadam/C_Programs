/*Write a program that asks the user for a number N and then prints a simple "count-down pattern" from N down 
to 1, but all on one line sepearted by dashes using a while loop*/
#include <stdio.h>

int main() {
    int N, i;
    printf("Enter a number: ");
    scanf("%d", &N);

    i = N;
    while (i > 0) {
        printf("%d", i);
        if (i > 1) {
            printf("-");
        }
        i--;
    }
    printf("\n");

    return 0;
}