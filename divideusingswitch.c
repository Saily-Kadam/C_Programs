//if the number is equal to 10 divide it by 2, if it is 20 divide by 3 if the numbre is equal to 30 divide by 4 if it is 40 divided by 
//using switch statement
#include<stdio.h>
int main()
{
    int i=0;
    printf("Enter a number");
    scanf("%d", &i);

   switch (i)
   {
    case 10:
    printf("dividing by 2:%d",i/2);
    break;
    case 20:
    printf("dividing by 3:%d", i/3);
    break;
    case 30:
    printf("dividing by 4:%d",i/4);
    break;
    case 40:
    printf("dividing by 5: %d", i/5);
    break;

}
return 0;
}