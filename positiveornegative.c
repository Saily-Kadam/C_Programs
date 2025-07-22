#include<stdio.h>
int main()
{
    int i =0;
    printf("Enter a number");
    scanf("%d", &i);
    if(i>0)
    printf("Number is positive");
    else if (i<0)
    printf("Number is negative");
    else
    printf("Number is 0");
    return 0;
}