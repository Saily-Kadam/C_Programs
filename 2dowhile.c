//Ask the user repeatedly for a password until correct (demonstrating do-while).
#include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    const char correctPassword[] = "secret123";  
    do {
        printf("Enter the password: ");
        scanf("%s", password);
    } while (strcmp(password, correctPassword) != 0);

    printf("Access granted!\n");

    return 0;
}