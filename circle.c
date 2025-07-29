#include<stdio.h>
int main()
{
    int r=0;
    printf("Enter radius of circle:");
    scanf("%d",&r);
    int area = 3.14*r*r;
    printf("The area of circle is %d",area);
    return 0;
}