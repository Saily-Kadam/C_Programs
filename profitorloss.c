//Compute profit or loss given cost price and selling price; display the result. 
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, result;

    // Input
    printf("Enter the Cost Price (CP): ");
    scanf("%f", &costPrice);

    printf("Enter the Selling Price (SP): ");
    scanf("%f", &sellingPrice);

    
    if (sellingPrice > costPrice) {
        result = sellingPrice - costPrice;
        printf("Profit: %.2f\n", result);
    } else if (sellingPrice < costPrice) {
        result = costPrice - sellingPrice;
        printf("Loss: %.2f\n", result);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
