//accept a number from the user and check for divisibility conditions. use nested if else statemets to implement
//the logic. Display the output based on the following rules
//- if the number is divisible by both 3 and 5, print :"FizzBuzz Trap !"
//- if the number is divisible by 3 only, print:"Fizz"
//- if the number is divisible by 5 only, print : "Buzz"
//- if the number is divisible by neither, print: "Safe"
#include <stdio.h>

int main() {
    int number;

    // Accept input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check divisibility using nested if-else
    if (number % 3 == 0) {
        if (number % 5 == 0) {
            printf("FizzBuzz Trap !\n");
        } else {
            printf("Fizz\n");
        }
    } else {
        if (number % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("Safe\n");
        }
    }

    return 0;
}
