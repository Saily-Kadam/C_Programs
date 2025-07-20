#include<stdio.h>
int main()
{
    int i=0, j=0;
    printf("Enter two numbers:");
    scanf("%d %d", &i, &j);
    printf("i=%d , j=%d", i, j);
    printf("The sum of the two given numbers is:%d\n",i+j);
    return 0;
}
