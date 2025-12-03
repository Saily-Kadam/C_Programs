#include <stdio.h>

float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float divide(float a, float b);

int main() {
    float x, y;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1: printf("Result = %.2f\n", add(x, y)); break;
        case 2: printf("Result = %.2f\n", sub(x, y)); break;
        case 3: printf("Result = %.2f\n", mul(x, y)); break;
        case 4: printf("Result = %.2f\n", divide(x, y)); break;

        default: printf("Invalid Choice!\n");
    }

    return 0;
}

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if(b == 0) {
        printf("Error! Cannot divide by zero.\n");
        return 0;
    }
    return a / b;
}