//Print all even numbers between 1 and n (user input) using while loop
#include <stdio.h>

int main() {
    int n, i = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d\n", i);
        i += 2; 
    }

    return 0;
}
