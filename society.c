//Society Management System
#include<stdio.h>
#include<stdlib.h>
struct societyMember{
    int flatNo;
    char name [50];
    float maintenance;
};
void addMember() {
    struct societyMember m;
    FILE *fp;
    fp = fopen("society.dat", "ab");
    if(fp == NULL) {
      printf("File error!\n"); 
      return; 
    }
    printf("Enter flat number ");
    scanf("%d", &m.flatNo);
    printf("Enter Member Name: ");
    scanf("%s", &m.name);
    printf("Enter Monthly Maintenance Amount: ");
    scanf("%f", &m.maintenance);
    fwrite(&m, sizeof(m),1,fp);
    fclose(fp);
    printf("Society member added successfully! \n");
}
void displayMember() {
    struct societyMember m;
    FILE *fp;
    fp = fopen("society.dat","rb");
    if(fp == NULL){
        printf("No records found!\n");
        return;
    }
    printf("\n--Society Member records---\n");
     while(fread(&m, sizeof(m), 1, fp)) {
        printf("ID: %d |Name: %s | Salary: %2f\n",m.flatNo, m.name, m.maintenance);
    }
    fclose(fp);
}
void searchClient(){
    struct societyMember m;
    FILE *fp;
    int id, found =0;
    fp = fopen("client.dat","rb");
    if (fp == NULL){
        printf("No records found! \n");
        return;
    }
    printf("Enter Client ID to search: ");
    scanf("%d", &id);

    while(fread(&m, sizeof(m), 1,fp)) {
        if(m.flatNo== id){
            printf("Record Found:\n");
            printf("FlatNo: %d\nName: %s\nMonthly Maintenance: %d.2f\n", m.flatNo,m.name,m.maintenance);
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
        printf("\n ====Society Management System ====\n");
        printf("1. Add Member\n");
        printf("2. Display Member:\n");
        printf("3. Search Member\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1){
            printf("Invalid input! Enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        switch (choice) {
            case 1:
            addMember();
            break;
            case 2:
            displayMember();
            break;
            case 3:
            searchMember();
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