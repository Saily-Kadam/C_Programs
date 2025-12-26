//Bank (employee) Management System
#include<stdio.h>
#include<stdlib.h>
struct bankEmployee{
    int bankEmpID;
    char Name [50];
    float Salary;
};
void addEmployee() {
    struct bankEmployee e;
    FILE *fp;
    fp = fopen("bankemp.dat", "ab");
    if(fp == NULL) {
      printf("File error!\n"); 
      return; 
    }
    printf("Enter bankEmp ID: ");
    scanf("%d", &e.bankEmpID);
    printf("Enter Employee Name: ");
    scanf("%s", &e.Name);
    printf("Enter Salary: ");
    scanf("%f", &e.Salary);
    fwrite(&e, sizeof(e),1,fp);
    fclose(fp);
    printf("Employee added successfully! \n");
}
void displayEmployee() {
    struct bankEmployee e;
    FILE *fp;
    fp = fopen("bankemp.dat","rb");
    if(fp == NULL){
        printf("No records found!\n");
        return;
    }
    printf("\n--Bank Employee records---\n");
     while(fread(&e, sizeof(e), 1, fp)) {
        printf("Bank Employee ID: %d | Employee Name: %s | Salary: %2f\n",e.bankEmpID, e.Name, e.Salary);
    }
    fclose(fp);
}
void searchEmployee(){
    struct bankEmployee e;
    FILE *fp;
    int id, found =0;
    fp = fopen("bankemp.dat","rb");
    if (fp == NULL){
        printf("No records found! \n");
        return;
    }
    printf("Enter employee to search: ");
    scanf("%d", &id);

    while(fread(&e, sizeof(e), 1,fp)) {
        if(e.bankEmpID== id){
            printf("Record Found:\n");
            printf("BankEmp Id: %d\nEmployee Name: %s\nSalary: %d.2f\n", e.bankEmpID,e.Name,e.Salary);
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
        printf("\n ====Bank (Employee) Management System ====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employee:\n");
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