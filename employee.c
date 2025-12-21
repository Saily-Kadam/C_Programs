//Employee management System//
#include<stdio.h>
#include<stdlib.h>
struct employee{
    int id;
    char name[50];
    float salary;
};
void addEmployee(){
    struct employee e;
    FILE *fp;
    fp = fopen("employees.dat","ab");
    if(fp == NULL){
        printf("File error!\n");
        return;
    }
    printf("Enter Employee ID: ");
    scanf("%d", &e.id);
    printf("Enter Employee Name: ");
    scanf("%[^\n]", e.name);
    printf("Enter Salary: ");
    scanf("%f", &e.salary);
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);
    printf("Employee added successfully!\n");
}
void displayEmployee() {
    struct employee  e;
    FILE *fp;
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("No records found!\n");
        return;
    }
    printf("\n -- Employee Records ---\n");
    while (fread(&e, sizeof(e), 1, fp)) {
        printf("ID: %d | Name: %s | Salary: %.2f\n", e.id, e.name, e.salary);
    }
    fclose(fp);
}
void searchEmployee(){
    struct employee e;
    FILE *fp;
    int id, found =0;
    fp = fopen("employees.dat","rb");
    if (fp == NULL){
        printf("No records found! \n");
        return;
    }
    printf("Enter Employee ID to search: ");
    scanf("%d", &id);

    while(fread(&e, sizeof(e), 1,fp)) {
        if(e.id == id){
            printf("Record Found:\n");
            printf("ID: %d\nName: %s\nSalary: %d.2f\n", e.id,e.name,e.salary);
            found = 1;
            break;
        }
    }
    if(!found)
    printf("Employee not found!\n");
    fclose(fp);
}
int main() {
    int choice;
    do {
        printf("\n ====Employee Management System ====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees:\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1){
            printf("Invalid input! Enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        switch (choice) {
            case 1:
            addEmployee();
            break;
            case 2:
            displayEmployee();
            break;
            case 3:
            searchEmployee();
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