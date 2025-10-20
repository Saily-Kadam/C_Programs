/*Read three angles of a triangle and check whether the triangle is valid. A triangle is
 valid if: Each angle is greater than 0 and sum of all three angles is 180 .*/
 #include<stdio.h>
 int main()
 {
    int ang1, ang2, ang3;
    printf("Enter three angles:");
    scanf("%d %d %d", &ang1,&ang2,&ang3);
    if(ang1>0 && ang2>0 && ang3>0 && ang1+ang2+ang3==180){
        printf("valid angle");
    }
    else{
        printf("Invalid angle");
    }
    return 0;
 }