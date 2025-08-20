// Print all numbers from 1 to n (user input)  using while loop
#include <stdio.h>

int main() {
    int n, i = 1;

    
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
