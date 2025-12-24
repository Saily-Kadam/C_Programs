//Product Management System
#include<stdio.h>
#include<stdlib.h>
struct product{
    int productID;
    char name [50];
    float Amount;
};
void addProduct() {
    struct product p;
    FILE *fp;
    fp = fopen("product.dat", "ab");
    if(fp == NULL) {
      printf("File error!\n"); 
      return; 
    }
    printf("Enter product ID: ");
    scanf("%d", &p.productID);
    printf("Enter Product Name: ");
    scanf("%s", &p.name);
    printf("Enter Amount: ");
    scanf("%f", &p.Amount);
    fwrite(&p, sizeof(p),1,fp);
    fclose(fp);
    printf("Product added successfully! \n");
}
void displayProduct() {
    struct product p;
    FILE *fp;
    fp = fopen("product.dat","rb");
    if(fp == NULL){
        printf("No records found!\n");
        return;
    }
    printf("\n--Product records---\n");
     while(fread(&p, sizeof(p), 1, fp)) {
        printf("Product ID: %d |Name: %s | Amount: %2f\n",p.productID, p.name, p.Amount);
    }
    fclose(fp);
}
void searchProduct(){
    struct product p;
    FILE *fp;
    int id, found =0;
    fp = fopen("product.dat","rb");
    if (fp == NULL){
        printf("No records found! \n");
        return;
    }
    printf("Enter product ID to search: ");
    scanf("%d", &id);

    while(fread(&p, sizeof(p), 1,fp)) {
        if(p.productID== id){
            printf("Record Found:\n");
            printf("Product Id: %d\nName: %s\nAmount: %d.2f\n", p.productID,p.name,p.Amount);
            found = 1;
            break;
        }
    }
    if(!found)
    printf("Product not found!\n");
    fclose(fp);
}
int main() {
    int choice;
    do {
        printf("\n ====Product Management System ====\n");
        printf("1. Add Product\n");
        printf("2. Display Product:\n");
        printf("3. Search Product\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1){
            printf("Invalid input! Enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        switch (choice) {
            case 1:
            addProduct();
            break;
            case 2:
            displayProduct();
            break;
            case 3:
            searchProduct();
            break;
            case 4:
            printf("Exiting..\n");
            break;
            default:
            printf("Invalid choice!\n");
        }
    }
    while (choice != 4);
    return 0;
}