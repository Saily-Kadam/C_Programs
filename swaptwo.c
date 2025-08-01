//swap two numbers without using a third variable
#include<stdio.h>
int main()
{
    int i=0,j=0;
    printf("Enter two numbers");
    scanf("%d %d", &i,&j);
    printf("a = %d b = %d\n",i,j);
    i = i+j;// i stores the sum
    j = i-j;// j is now sum minus i which will give j
    i = i-j;// sum minus new value of j
    printf("a = %d b = %d\n", i, j);
    return 0;
}