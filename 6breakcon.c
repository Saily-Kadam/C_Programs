//Allow the user to enter a password up to 3 times. If the correct password is entered, print 
//Access granted and break. Otherwise, after 3 attempts, print Account locked. 
#include <stdio.h>
#include <string.h>

int main() {
    const char correctPassword[] = "mypassword"; 
    char input[100];
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter password: ");
        scanf("%99s", input); 

        if (strcmp(input, correctPassword) == 0) {
            printf("Access granted\n");
            break;
        } else {
            printf("Incorrect password\n");
        }

        attempts++;
    }

    if (attempts == 3) {
        printf("Account locked\n");
    }

    return 0;
}