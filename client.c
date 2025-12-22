//Client Management System
#include<stdio.h>
#include<stdlib.h>
struct client {
    int id;
    char name [50];
    float totalAmount;
};
void addClient() {
    struct client c;
    FILE *fp;
    fp = fopen("client.dat","ab");
    if(fp == NULL) {
        printf("File error!\n");
        return;
    }
    printf("Enter Client ID: ");
    scanf("%d", &c.id);
    printf("Enter Client Name: ");
    scanf("%s", c.name);
    printf("Enter totalAmount: ");
    scanf("%f", &c.totalAmount);
    fwrite(&c, sizeof(c), 1, fp);
    fclose(fp);
    printf("Client added successfully! \n");
}
void displayClient() {
    struct client c;
    FILE *fp;
    fp = fopen("client.dat","rb");
    if(fp == NULL) {
        printf("No records found!\n");
        return;
    }
    printf("\n -- Client Records--\n");
    while(fread(&c, sizeof(c), 1, fp)) {
        printf("ID: %d |Name: %s | Salary: %2f\n",c.id, c.name, c.totalAmount);
    }
    fclose(fp);
}
void searchClient(){
    struct client c;
    FILE *fp;
    int id, found =0;
    fp = fopen("client.dat","rb");
    if (fp == NULL){
        printf("No records found! \n");
        return;
    }
    printf("Enter Client ID to search: ");
    scanf("%d", &id);

    while(fread(&c, sizeof(c), 1,fp)) {
        if(c.id == id){
            printf("Record Found:\n");
            printf("ID: %d\nName: %s\nTotal Amount: %d.2f\n", c.id,c.name,c.totalAmount);
            found = 1;
            break;
        }
    }
    if(!found)
    printf("Client not found!\n");
    fclose(fp);
}
int main() {
    int choice;
    do {
        printf("\n ====Client Management System ====\n");
        printf("1. Add Client\n");
        printf("2. Display Client:\n");
        printf("3. Search Client\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1){
            printf("Invalid input! Enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        switch (choice) {
            case 1:
            addClient();
            break;
            case 2:
            displayClient();
            break;
            case 3:
            searchClient();
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