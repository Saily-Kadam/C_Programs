/*Write a program to read two distinct integers from user and print the largest number using a ternanry operator*/
#include<stdio.h>
int main(){
    int num1, num2, largest;
    printf("Enter two distinct integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2) {
        printf("Error: Numbers are not distinct.\n");
        return 1; 
    }
    largest = (num1 > num2) ? num1 : num2;

    printf("The largest number is: %d\n", largest);

    return 0;
}