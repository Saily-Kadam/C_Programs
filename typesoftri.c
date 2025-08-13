/*Write a program that reads three positive numbers a, b and c which represent the lengths of 
the sides of a triangle. Check if they form a valid triangle and categorize it (equilateral, 
isosceles, scalene). 
a. a+b > c and a+c > b and b+c > a implies a valid triangle 
b. a=b=c => equilateral, a=b or a=c or b=c => isosceles, a!=b!=c => scalene*/
#include <stdio.h>

int main() {
    float a, b, c;

    
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Side lengths must be positive numbers.\n");
        return 1;
    }

    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle is valid.\n");

        
        if (a == b && b == c) {
            printf("It is an equilateral triangle.\n");
        } else if (a == b || a == c || b == c) {
            printf("It is an isosceles triangle.\n");
        } else {
            printf("It is a scalene triangle.\n");
        }
    } else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}
