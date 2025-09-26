/* Write a program that accepts a single character representing a color code ('R', 'G', 'B', etc) and display a mood based on the selected color: 
'R' or 'r': Angry, 'G' or 'g': Happy, 'B' or 'b': Sad. C program*/
#include <stdio.h>

int main() {
    char color;

    printf("Enter a color code (R, G, B): ");
    scanf(" %c", &color);

    switch(color) {
        case 'R':
        case 'r':
            printf("Mood: Angry\n");
            break;
        case 'G':
        case 'g':
            printf("Mood: Happy\n");
            break;
        case 'B':
        case 'b':
            printf("Mood: Sad\n");
            break;
        default:
            printf("Invalid color code.\n");
    }

    return 0;
}