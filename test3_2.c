/*Write a c program that prints the following pattern using a while loop:
Accept n from the user. For example n=5, the output should be:
1
1   2
1   2   3
1   2   3   4
1   2   3   4   5*/
#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            printf("%d   ", j);
            j++;
        }

        printf("\n"); 
        i++;
    }

    return 0;
}