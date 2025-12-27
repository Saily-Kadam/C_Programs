//Shuttle (employee) Management System
#include<stdio.h>
#include<stdlib.h>
struct shuttleEmp{
    int EmpID;
    char Name [50];
    float Salary;
};
void addEmployee() {
    struct shuttleEmp s;
    FILE *fp;
    fp = fopen("shutemp.dat", "ab");
    if(fp == NULL) {
      printf("File error!\n"); 
      return; 
    }
    printf("Enter shuttleEmp ID: ");
    scanf("%d", &s.EmpID);
    printf("Enter Employee Name: ");
    scanf("%s", &s.Name);
    printf("Enter Salary: ");
    scanf("%f", &s.Salary);
    fwrite(&s, sizeof(s),1,fp);
    fclose(fp);
    printf("Employee added successfully! \n");
}
void displayEmployee() {
    struct shuttleEmp s;
    FILE *fp;
    fp = fopen("shuttleEmp.dat","rb");
    if(fp == NULL){
        printf("No records found!\n");
        return;
    }
    printf("\n--Shuttle Employee records---\n");
     while(fread(&s, sizeof(s), 1, fp)) {
        printf("Shuttle Employee ID: %d | Employee Name: %s | Salary: %2f\n",s.EmpID, s.Name, s.Salary);
    }
    fclose(fp);
}
void searchEmployee(){
    struct shuttleEmp s;
    FILE *fp;
    int id, found =0;
    fp = fopen("shutteEmp.dat","rb");
    if (fp == NULL){
        printf("No records found! \n");
        return;
    }
    printf("Enter employee to search: ");
    scanf("%d", &id);

    while(fread(&s, sizeof(s), 1,fp)) {
        if(s.EmpID== id){
            printf("Record Found:\n");
            printf(" Shuttle Emp Id: %d\nEmployee Name: %s\nSalary: %d.2f\n", s.EmpID,s.Name,s.Salary);
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
        printf("\n ====Shuttle (Employee) Management System ====\n");
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