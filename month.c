/* Input month number and display the number of days in the month (consider leap years
 for February).*/
 #include<stdio.h>
 int main()
 {
    int i=0, year=0;
    printf("Enter a number\n");
    scanf("%d", &i);
    if(i==2){
        printf("Enter year:");
        scanf("%d", &year);
        if((year%4==0 && year%100!=0) || year%400==0){
            printf("Number of days are 29");
        }
        else{
            printf("Number of days are 28");
        }
    }
    else if(i==1 || i==3 || i==5 || i==7 ||i==8||i==10||i==12){
        printf("The number of days are 31\n");
    }
    else if(i==4 || i== 6||i==9||i==11){
        printf("The number of days are 30\n");
    }
    else {
        printf("Invalid input\n");
    }
 }