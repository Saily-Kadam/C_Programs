/*write a program to determine the discount a customer gets at a shop. The program should take the amount (in rupees) that the customer spends and print the discount the customer will receive.
Discount rules:
- if the amount is less than 50, the discount is 0%.
- if the amount is between 50 and 100(inclusive), the discount is 10%.
- if the amount is between 101 and 200 (inclusive), the discount is 20%.
- if the amount is greater than 200, the discount is 30%.*/
#include <stdio.h>

int main() {
    float amount, discount = 0.0;
    int discount_percent = 0;

    printf("Enter the amount spent (in rupees): ");
    scanf("%f", &amount);

    if (amount < 50) {
        discount_percent = 0;
    } else if (amount <= 100) {
        discount_percent = 10;
    } else if (amount <= 200) {
        discount_percent = 20;
    } else {
        discount_percent = 30;
    }
    discount = (discount_percent / 100.0) * amount;
    printf("Discount: ₹%.2f (%d%%)\n", discount, discount_percent);

    return 0;
}