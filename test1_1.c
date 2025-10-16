/*Accept a number from the user and check for divisibility conditions. Use nested if-else statements to implement
the logic.
Display the output based on the following rules:
If the number is divisible by both 3 and 5 print:"fizzBuzz Trap!"
If the number is divisible by 3 only print"Fizz"
If the number is divisible by 5 only, print "Buzz"
If the number is divisible by neither, print "Safe"*/
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0) {
        if (num % 5 == 0) {
            printf("fizzBuzz Trap!\n");
        } else {
            printf("Fizz\n");
        }
    } else {
        if (num % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("Safe\n");
        }
    }

    return 0;
}