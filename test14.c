/*write a program that takes an integer input from the user and uses the uses the 
ternary operator to determine whether the number is Odd or Even. Display the appropriate message accordingly.*/
#include <stdio.h>

int main() {
    int num=0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    (num % 2 == 0) ? 
        printf("The number %d is Even.\n", num) : 
        printf("The number %d is Odd.\n", num);

    return 0;
}