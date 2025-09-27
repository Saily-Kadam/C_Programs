/*you are given two integer inputs: -has_horn (1 or 0), -can_fly (1 or 0). Based on the inputs values, 
classify the animal using logical and nested if conditions: 
-if has_horn = 1 and can_fly = 0, print: "Unicorn", if has_horn = 0 and can_fly = 1, print: "Pegasus", 
if has_horn=1 and can_fly = 1, print "Alicorn", if has_horn =0 and can_fly =0, print: "Horse"*/
#include <stdio.h>

int main() {
    int has_horn, can_fly;
    printf("Enter has_horn (1 or 0): ");
    scanf("%d", &has_horn);

    printf("Enter can_fly (1 or 0): ");
    scanf("%d", &can_fly);
    if (has_horn == 1) {
        if (can_fly == 1) {
            printf("Alicorn\n");
        } else {
            printf("Unicorn\n");
        }
    } else {
        if (can_fly == 1) {
            printf("Pegasus\n");
        } else {
            printf("Horse\n");
        }
    }

    return 0;
}