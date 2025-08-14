// Input month number and display the number of days in the month (consider leap years for February). 
#include <stdio.h>
#include <string.h>

int main() {
    char month[20];
    int year;

    printf("Enter month name: ");
    scanf("%s", month);

    
    if (strcmp(month, "February") == 0) {
        printf("Enter year: ");
        scanf("%d", &year);
        
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            printf("There are 29 days\n");
        else
            printf("There are 28 days\n");
    }
    else if (strcmp(month, "January") == 0 || strcmp(month, "March") == 0 || 
             strcmp(month, "May") == 0 || strcmp(month, "July") == 0 || 
             strcmp(month, "August") == 0 || strcmp(month, "October") == 0 || 
             strcmp(month, "December") == 0) {
        printf("There are 31 days\n");
    }
    else if (strcmp(month, "April") == 0 || strcmp(month, "June") == 0 || 
             strcmp(month, "September") == 0 || strcmp(month, "November") == 0) {
        printf("There are 30 days\n");
    }
    else {
        printf("Invalid month entered.\n");
    }

    return 0;
}
