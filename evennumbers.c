#include<stdio.h>
int main()
{
    int n=0, i=0;
    printf("Enter number");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        if(i%2==0)
        printf("i=%d\n", i);
        
    }
    return 0;
}