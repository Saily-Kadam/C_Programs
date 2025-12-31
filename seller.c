//Seller (Employee) Management System
#include<stdio.h>
#include<stdlib.h>
struct Emp{
    int EmpID;
    char Name [50];
    float Salary;
};
void addEmp() { 
    struct Emp r;
    FILE *fp;
    fp = fopen("Emp.dat", "ab");
    if(fp == NULL) {
      printf("File error!\n"); 
      return; 
    }
    printf("Enter Emp ID: ");
    scanf("%d", &r.EmpID);
    printf("Enter Emp Name: ");
    scanf("%s", &r.Name);
    printf("Enter Salary: ");
    scanf("%f", &r.Salary);
    fwrite(&r, sizeof(r),1,fp);
    fclose(fp);
    printf("Emp added successfully! \n");
}
void displayEmp() {
    struct Emp r;
    FILE *fp;
    fp = fopen("Emp.dat","rb");
    if(fp == NULL){
        printf("No records found!\n");
        return;
    }
    printf("\n--Employee records---\n");
     while(fread(&r, sizeof(r), 1, fp)) {
        printf("Emp ID: %d | Emp Name: %s | Salary: %2f\n",r.EmpID, r.Name, r.Salary);
    }
    fclose(fp);
}
void searchEmp(){
    struct Emp r;
    FILE *fp;
    int id, found =0;
    fp = fopen("Emp.dat","rb");
    if (fp == NULL){
        printf("No records found! \n");
        return;
    }
    printf("Enter Emp to search: ");
    scanf("%d", &id);

    while(fread(&r, sizeof(r), 1,fp)) {
        if(r.EmpID== id){
            printf("Record Found:\n");
            printf(" Emp Id: %d\n Emp Name: %s\nSalary: %d.2f\n", r.EmpID,r.Name,r.Salary);
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
        printf("\n ====Seller (Employee) Management System ====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employee:\n");
        printf("3. Search Empoyee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1){
            printf("Invalid input! Enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        switch (choice) {
            case 1:
            addEmp();
            break;
            case 2:
            displayEmp();
            break;
            case 3:
            searchEmp();
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