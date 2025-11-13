/*Write a program that reads three positive numbers a, b, and c which represent the
 lengths of the sides of a triangle. Check if they form a valid triangle and categorize it
 (equilateral, isosceles, scalene).
 • a+b>c, a+c>b, and b+c>a imply a valid triangle. item
 a =b=c equilateral
 a =b or a=c or b=c isosceles
 a not equal to b not equal to c scalene*/
 #include<stdio.h>
 int main()
 {
    int a=0,b=0,c=0;
    printf("Enter the sides of the triangle:\n");
    scanf("%d %d %d", &a, &b, &c);
   
        if(a>0 && b>0 && c >0 && a+b>c && a+c>b && b+c>a){
            if(a==b && b==c){
                printf("Equilateral Triangle\n");
            }
            else if(a==b || a==c || b==c){
                printf("Isosceles Triangle\n");
            }
            else if(a!=b && b!= c && a!=c){
                printf("Scalene");
            } 
        }
        else{
            printf("Invalid Triangle");
        }
    
  
        return 0;
 }