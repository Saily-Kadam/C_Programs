// Read a character (+, -, *, /) and two integers, and perform the corresponding arithmetic operations.
#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    int result;

   
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %d\n", result);
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
