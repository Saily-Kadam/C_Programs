#include<stdio.h>
int main()
{
    int n=0, i=0;
    printf("Enter a number");
    scanf("%d",&n);

    for(i=0;i<=20;++i);
    {
        printf("%d *%d=%d\n",n,i,(n*i));
    }
    return 0;
}
// tables 1 to 20