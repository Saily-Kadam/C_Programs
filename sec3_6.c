/*Input week number (1-7) and print corresponding weekday name.*/
#include<stdio.h>
int main()
{
    int i=0;
    printf("Enter a number from 1 to 7:");
    scanf("%d", &i);
    if(i == 1){
        printf("Monday");
    }
    else if(i==2){
        printf("Tuesday");
    }
    else if(i==3) {
        printf("Wednesday");
    }
    else if(i==4) {
        printf("Thursday");
    }
    else if(i==5) {
        printf("Friday");
    }
    else if(i==6){
        printf("Saturday");
    }
    else if(i==7){
        printf("Sunday");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}