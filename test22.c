/*write a program that: - reads n integers from the user, -uses a for loop to process each number,
 -ses the ternary operator to print: "even " if the number is divisible by 2, "odd" otherwise. c program*/
 #include <stdio.h>

int main() {
    int n, num;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        printf("%s\n", (num % 2 == 0) ? "even" : "odd");
    }

    return 0;
}