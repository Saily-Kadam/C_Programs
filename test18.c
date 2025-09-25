/*write a program that -reads n integers from the user, each representing a day 
of the week(1 for monday ets) - as soon as the user enters a day of the week print corresponding day - uses a for loop to process each input. -Inside the loop, uses a switch statement to print the corresponding day name. 
-if the no. is not in the range 1-7 print "Invalid day"*/
#include <stdio.h>

int main() {
    int n, day;

    printf("Enter the number of days to input: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter day number %d (1-7): ", i + 1);
        scanf("%d", &day);

        switch (day) {
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            case 7:
                printf("Sunday\n");
                break;
            default:
                printf("Invalid day\n");
                break;
        }
    }

    return 0;
}