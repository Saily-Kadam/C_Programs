//Determine if the year is leap
#include<stdio.h>
int main()
{
    int i=0;
    printf("Enter a year:");
    scanf("%d", &i);
    if(i%4==0 && i%100!=0 || i%400==0){
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}