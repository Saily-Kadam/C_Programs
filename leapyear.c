#include<stdio.h>
int main()
{
    int year = 0;
    printf("Enter year:");
    scanf("%d", &year);
    if (year%100==0)
    {
        if(year%400==0 && year%4==0)
        printf("The year is leap");
        else
        printf("Not a leap year");
        
    }
    else if (year%100 !=0)
    {
        if(year%4==0)
        printf("Leap year");
        else
        printf("Not a leap year");
    }
    else
    printf("Not a leap year");
    return 0;
}