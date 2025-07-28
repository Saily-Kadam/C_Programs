// Read two integers from the user and print their addition, substraction
// and multiplication
#include<stdio.h>
int main()
{
    int a=0, b=0;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);

    printf("The addition is:%d\n",a+b);
    printf("The substraction is:%d\n",a-b);
    printf("The multiplication is:%d\n",a*b);

    return 0;
}