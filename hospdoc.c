//Hodspital(Doctor) Management System
#include<stdio.h>
#include<stdlib.h>
struct doctor{
    int doctorID;
    char name [50];
    float Salary;
};
void addDoctor() {
    struct doctor d;
    FILE *fp;
    fp = fopen("doctor.dat", "ab");
    if(fp == NULL) {
      printf("File error!\n"); 
      return; 
    }
    printf("Enter doctor ID: ");
    scanf("%d", &d.doctorID);
    printf("Enter Doctor Name: ");
    scanf("%s", &d.name);
    printf("Enter Salary: ");
    scanf("%f", &d.Salary);
    fwrite(&d, sizeof(d),1,fp);
    fclose(fp);
    printf("Doctor added successfully! \n");
}
void displayDoctor() {
    struct doctor d;
    FILE *fp;
    fp = fopen("doctor.dat","rb");
    if(fp == NULL){
        printf("No records found!\n");
        return;
    }
    printf("\n--Doctor records---\n");
     while(fread(&d, sizeof(d), 1, fp)) {
        printf("Doctor ID: %d |Name: %s | Salary: %2f\n",d.doctorID, d.name, d.Salary);
    }
    fclose(fp);
}
void searchDoctor(){
    struct doctor d;
    FILE *fp;
    int id, found =0;
    fp = fopen("doctor.dat","rb");
    if (fp == NULL){
        printf("No records found! \n");
        return;
    }
    printf("Enter doctor ID to search: ");
    scanf("%d", &id);

    while(fread(&d, sizeof(d), 1,fp)) {
        if(d.doctorID== id){
            printf("Record Found:\n");
            printf("doctorId: %d\nName: %s\nSalary: %d.2f\n", d.doctorID,d.name,d.Salary);
            found = 1;
            break;
        }
    }
    if(!found)
    printf("Doctor not found!\n");
    fclose(fp);
}
int main() {
    int choice;
    do {
        printf("\n ====Hospital(Doctor) Management System ====\n");
        printf("1. Add Doctor\n");
        printf("2. Display Doctor:\n");
        printf("3. Search Doctor\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1){
            printf("Invalid input! Enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        switch (choice) {
            case 1:
            addDoctor();
            break;
            case 2:
            displayDoctor();
            break;
            case 3:
            searchDoctor();
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