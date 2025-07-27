//given a no, output small if less than 10 "large" if more than 10 "equal" if exactly 10.

#include<stdio.h>
int main()
{
    int num =0;
    printf("Enter a number");
    scanf("%d", &num);

    int ans =0;
    if (num < 10)
        ans =1;
    else if (num > 10)
        ans =2;
    else
        ans =3;
        
    switch(ans){
        case 1:
            printf("small");
            break;
        case 2:
            printf("large");
            break;
        case 3:
            printf("equal");        
    }     
    return 0;
}