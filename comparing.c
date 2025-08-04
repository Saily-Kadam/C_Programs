/*read a number from the user and is the number if between 100 and 200 print small number if between 201 and 300 print big number and if the number is between 301 and 400 print large
number and if the number is greater than 401 print very large number.*/

#include<stdio.h>
int main()
{
    int i=0;
    printf("Enter a number");
    scanf("%d", &i);

    if(i>100 && i<=200)
    printf("Small number");
    else if(i>201 && i<=300)
    printf("big number");
    else if(i>301 && i<=400)
    printf("large number");
    else if(i>401)
    printf("Very large number");
    else
    printf("The number is smaller than 100");
    return 0;
}