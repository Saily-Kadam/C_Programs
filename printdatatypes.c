/* Program to read an integer, float, double, long double, a character 
from the user and print it p*/

#include<stdio.h>
int main()
{
    int i=0;
    float j = 0;
    double k =0;
    long double l =0;
    char ch = ' ';

    printf("Enter a integer");
    scanf("%d", &i);
    printf("Enter a float value");
    scanf("%f",&j);
    printf("Enter a double value");
    scanf("%lf",&k);
    printf("Enter a long double value");
    scanf("%Lf",&l);
    getchar();
    printf("Enter a character");
    scanf("%c",&ch);

    printf("The integer is: %d\n",i);
    printf("The float value is: %f\n",j);
    printf("The double value is: %lf\n",k);
    printf("The long double value is: %Lf\n",l);
    printf("The character is: %c\n", ch);

    return 0;
}