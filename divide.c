//if a number is equal to 10 divide it by 2 if the number is equal to 20 divide it by 3 if the number is equal to
//30 divide it by 4 if the number is equal to 50 divide it by 5
#include<stdio.h>
int main()
{
    int i=0;
    printf("Enter a number");
    scanf("%d", &i);

    if(i==10)
    printf("It is 10 so dividing by 2 gives : %d",i/2);
    else if (i==20)
    printf("It is 20 so dividing it by 3 gives: %d",i/3);
    else if (i==30)
    printf("It is 30 so dividing it by 4 gives:%d",i/4);
    else if(i==50)
    printf("It is 50 so dividing by 5 gives: %d",i/5);
    return 0;
}