//Airline (Employee) Management System
#include<stdio.h>
#include<stdlib.h>
struct airlineEmp{
    int EmpID;
    char Name [50];
    float Salary;
};
void addEmp() { 
    struct airlineEmp a;
    FILE *fp;
    fp = fopen("airlineEmp.dat", "ab");
    if(fp == NULL) {
      printf("File error!\n"); 
      return; 
    }
    printf("Enter Emp ID: ");
    scanf("%d", &a.EmpID);
    printf("Enter Emp Name: ");
    scanf("%s", &a.Name);
    printf("Enter Salary: ");
    scanf("%f", &a.Salary);
    fwrite(&a, sizeof(a),1,fp);
    fclose(fp);
    printf("Emp added successfully! \n");
}
void displayEmp() {
    struct airlineEmp a;
    FILE *fp;
    fp = fopen("airlineEmp.dat","rb");
    if(fp == NULL){
        printf("No records found!\n");
        return;
    }
    printf("\n--Employee records---\n");
     while(fread(&a, sizeof(a), 1, fp)) {
        printf("Emp ID: %d | Emp Name: %s | Salary: %2f\n",a.EmpID, a.Name, a.Salary);
    }
    fclose(fp);
}
void searchEmp(){
    struct airlineEmp a;
    FILE *fp;
    int id, found =0;
    fp = fopen("airlineEmp.dat","rb");
    if (fp == NULL){
        printf("No records found! \n");
        return;
    }
    printf("Enter Emp to search: ");
    scanf("%d", &id);

    while(fread(&a, sizeof(a), 1,fp)) {
        if(a.EmpID== id){
            printf("Record Found:\n");
            printf(" Emp Id: %d\n Emp Name: %s\nSalary: %d.2f\n", a.EmpID,a.Name,a.Salary);
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
        printf("\n ====Airline (Employee) Management System ====\n");
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