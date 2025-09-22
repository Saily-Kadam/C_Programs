/*Write a program that:
-reads the marks of n students 
-uses a for loop to process each student's marks
- inside the loop, uses a nested if {else if structure to classify:
1 if marks >= 90, print "grade A"
2 else if marks >= 75, print "Grade B"
3 else if marks >= 60, print "Grade C"
4 else if marks >= 40, print "Grade D"
5 else , print "Fail"*/

#include <stdio.h>
void run()
{
    int n, marks;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter marks for student %d: ", i);
        scanf("%d", &marks);

        if (marks >= 90) {
            printf("Grade A\n");
            continue;
        } else {
            if (marks >= 75 && marks < 90) {
                printf("Grade B\n");
                continue;
            } else {
                if (marks >= 60 && marks < 75) {
                    printf("Grade C\n");
                    continue;
                } else {
                    if (marks >= 40 && marks < 60) {
                        printf("Grade D\n");
                        continue;
                    } else {
                        printf("Fail\n");
                        continue;
                    }
                }
            }
        }
    }

    return;

}

int main() {
    
    run();
    return 0;
}