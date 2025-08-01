//print the area and perimeter of rectangle
#include<stdio.h>
int main()
{
    int l =0, b=0;
    printf("Enter the lenght and breadth of rectangle");
    scanf("%d %d", &l, &b);// never forget to write &l and &b intead of just l, b it is wrong
    printf("The area of rectangle is %d\n",l*b);
    printf("The perimeter of rectangle is %d\n", 2*(l+b));
    return 0;
}