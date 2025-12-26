//Bank (customer) Management System
#include<stdio.h>
#include<stdlib.h>
struct bank{
    int bankID;
    char Name [50];
    float AccountType;
};
void addAccount() {
    struct bank b;
    FILE *fp;
    fp = fopen("bank.dat", "ab");
    if(fp == NULL) {
      printf("File error!\n"); 
      return; 
    }
    printf("Enter bank ID: ");
    scanf("%d", &b.bankID);
    printf("Enter Account Holder Name: ");
    scanf("%s", &b.Name);
    printf("Enter Account Type: ");
    scanf("%f", &b.AccountType);
    fwrite(&b, sizeof(b),1,fp);
    fclose(fp);
    printf("Account added successfully! \n");
}
void displayAccount() {
    struct bank b;
    FILE *fp;
    fp = fopen("bank.dat","rb");
    if(fp == NULL){
        printf("No records found!\n");
        return;
    }
    printf("\n--Bank Account records---\n");
     while(fread(&b, sizeof(b), 1, fp)) {
        printf("Bank ID: %d |Account Holder Name: %s | Accunt Type: %2f\n",b.bankID, b.Name, b.AccountType);
    }
    fclose(fp);
}
void searchAccount(){
    struct bank b;
    FILE *fp;
    int id, found =0;
    fp = fopen("bank.dat","rb");
    if (fp == NULL){
        printf("No records found! \n");
        return;
    }
    printf("Enter bank Account to search: ");
    scanf("%d", &id);

    while(fread(&b, sizeof(b), 1,fp)) {
        if(b.bankID== id){
            printf("Record Found:\n");
            printf("Bank Id: %d\nAccount Holder's Name: %s\nAccount Type: %d.2f\n", b.bankID,b.Name,b.AccountType);
            found = 1;
            break;
        }
    }
    if(!found)
    printf("Bank Account not found!\n");
    fclose(fp);
}
int main() {
    int choice;
    do {
        printf("\n ====Bank (Customer) Management System ====\n");
        printf("1. Add Bank Account\n");
        printf("2. Display Account:\n");
        printf("3. Search Account\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1){
            printf("Invalid input! Enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        switch (choice) {
            case 1:
            addAccount();
            break;
            case 2:
            displayAccount();
            break;
            case 3:
            searchAccount();
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