/*write a c program that points the following pattern using while loop. Accept n from the user. For example n = 5 the output should be :1	2	3	4	5
1	2	3	4
1	2	3
1	2
1*/
#include <stdio.h>

int main() {
    int n, i, j;

    // Get input from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    i = n;
    while (i >= 1) {
        j = 1;
        while (j <= i) {
            printf("%d\t", j);
            j++;
        }
        printf("\n");
        i--;
    }

    return 0;
}