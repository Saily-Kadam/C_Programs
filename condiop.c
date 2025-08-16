//Assign remarks ("Pass"/"Fail") using conditional operators based on marks.
#include <stdio.h>

int main() {
    int marks;

   
    printf("Enter marks: ");
    scanf("%d", &marks);

   
    (marks >= 40) ? printf("Pass\n") : printf("Fail\n");
    return 0;
}
