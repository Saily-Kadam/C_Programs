// read a number from user and if it is between 100 and 200 divide it by 3 if the result is less then 50 priint small number
#include<stdio.h>
int main()
{
    int num =0;
    printf("Enter a number = ");
    scanf("%d", &num);

    if(num>100 && num<200)
    {
        num = num/3;
        if(num <50)
        printf("Small Number");
        else
        printf("Very big number");
    }
    else if(num>200 && num<300)
    {
        num = num/2;
        if(num < 110)
        printf("small number");
        else{
            num = num/5;
            printf("number is %d", num);
        }
    }
    else if(num>300)
    printf("Very big  number");
    else
    printf("very very small number");
    return 0;
}