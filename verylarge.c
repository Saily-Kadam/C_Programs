/*read a number from the user and print a small number if the number is less than 100, print a large number if the number is greater than 200, and print a very large number if the number
is greater than 1000.*/
#include<stdio.h>
int main()
{
    int i=0;
    printf("Enter a number");
    scanf("%d", &i);

    if(i<100)
    printf("small number");

    else if (i>200 && i<1000)
    printf("Large number");

    else if(i>1000)
    printf("very large number");

    else 
    printf("No. is greater than 100 but smaller than 200");
    return 0;
}