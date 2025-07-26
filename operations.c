#include <stdio.h>

int main() {
    char op;
    int a, b;
    double result = 0.0;

    printf("Enter a char operation (+, -, *, /): ");
    scanf(" %c", &op);  // Note the space before %c to skip whitespace

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (op == '+') {
        result = a + b;
        printf("Result: %.2f\n", result);
    }
    else if (op == '-') {
        result = a - b;
        printf("Result: %.2f\n", result);
    }
    else if (op == '*') {
        result = a * b;
        printf("Result: %.2f\n", result);
    }
    else if (op == '/') {
        if (b != 0) {
            result = (double)a / b;
            printf("Result: %.2f\n", result);
        } else {
            printf("Error: Division by zero\n");
        }
    }
    else {
        printf("Invalid operation\n");
    }

    return 0;
}
