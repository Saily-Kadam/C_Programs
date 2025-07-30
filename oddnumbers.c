#include<stdio.h>
int main()
{
    int i =0, j=0;
    printf("Enter a number");
    scanf("%d",&j);

    for(i=0;i<j;i++)
    {
        if(i%2!=0)
        printf("i=%d\n",i);
    }
    return 0;
}