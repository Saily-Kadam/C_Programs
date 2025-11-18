//Use a ternary operator to nd if a number is even or odd.
#include<stdio.h>
int main()
{
    int i=0;
    printf("Enter a number\n");
    scanf("%d", &i);
    i%2==0 ? printf("Even number\n") : printf("Odd number\n");
    return 0;
}