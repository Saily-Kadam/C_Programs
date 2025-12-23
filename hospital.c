//Hodspital(Patient) Management System
#include<stdio.h>
#include<stdlib.h>
struct patient{
    int patientID;
    char name [50];
    float Bill;
};
void addPatient() {
    struct patient p;
    FILE *fp;
    fp = fopen("patient.dat", "ab");
    if(fp == NULL) {
      printf("File error!\n"); 
      return; 
    }
    printf("Enter patient ID: ");
    scanf("%d", &p.patientID);
    printf("Enter Patient Name: ");
    scanf("%s", &p.name);
    printf("Enter Total Bill: ");
    scanf("%f", &p.Bill);
    fwrite(&p, sizeof(p),1,fp);
    fclose(fp);
    printf("Patient added successfully! \n");
}
void displayPatient() {
    struct patient p;
    FILE *fp;
    fp = fopen("patient.dat","rb");
    if(fp == NULL){
        printf("No records found!\n");
        return;
    }
    printf("\n--Patient records---\n");
     while(fread(&p, sizeof(p), 1, fp)) {
        printf("Patient ID: %d |Name: %s | Bill: %2f\n",p.patientID, p.name, p.Bill);
    }
    fclose(fp);
}
void searchPatient(){
    struct patient p;
    FILE *fp;
    int id, found =0;
    fp = fopen("patient.dat","rb");
    if (fp == NULL){
        printf("No records found! \n");
        return;
    }
    printf("Enter patient ID to search: ");
    scanf("%d", &id);

    while(fread(&p, sizeof(p), 1,fp)) {
        if(p.patientID== id){
            printf("Record Found:\n");
            printf("PatientId: %d\nName: %s\nBill: %d.2f\n", p.patientID,p.name,p.Bill);
            found = 1;
            break;
        }
    }
    if(!found)
    printf("Patient not found!\n");
    fclose(fp);
}
int main() {
    int choice;
    do {
        printf("\n ====Hospital(patient) Management System ====\n");
        printf("1. Add Patient\n");
        printf("2. Display Patient:\n");
        printf("3. Search Patient\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1){
            printf("Invalid input! Enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        switch (choice) {
            case 1:
            addPatient();
            break;
            case 2:
            displayPatient();
            break;
            case 3:
            searchPatient();
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