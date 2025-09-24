//Write a program that takes input from the user and uses the ternary operator to determine whether the number 
//is odd or even. Display the appropriate message accordingly.
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("The number %d is even.\n", num) : printf("The number %d is odd.\n", num);

    return 0;
}