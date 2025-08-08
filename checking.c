// check what happens if non numeric data is entered when an integer or float is expected
#include<stdio.h>
int main()
{
    int x=0;
    printf("Enter a number");
    scanf("%d", &x);
    printf("The value is: %d", x);
    return 0;
}
// if a character of a symbol is given the answer is 0 and if a float is given then the first before point value is returned 