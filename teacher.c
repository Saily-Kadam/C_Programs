//Teacher management System
#include<stdio.h>
#include<stdlib.h>
struct teacher {
    int id;
    char name [50];
    float salary;
};
void addTeacher() {
    struct teacher t;
    FILE *fp;
    fp = fopen("teacher.dat","ab");
    if(fp == NULL) {
        printf("File error!\n");
        return;
    }
    printf("Enter Teacher ID: ");
    scanf("%d", &t.id);
    printf("Enter Teacher Name: ");
    scanf("%[^\n]", t.name);
    printf("Enter salary: ");
    scanf("%f", &t.salary);
    fwrite(&t, sizeof(t), 1, fp);
    fclose(fp);
    printf("Employee added successfully! \n");
}
void displayTeacher() {
    struct teacher t;
    FILE *fp;
    fp = fopen("teacher.dat","rb");
    if(fp == NULL) {
        printf("No records found!\n");
        return;
    }
    printf("\n -- Teacher Records--\n");
    while(fread(&t, sizeof(t), 1, fp)) {
        printf("ID: %d |Name: %s | Salary: %2f\n",t.id, t.name, t.salary);
    }
    fclose(fp);
}
void searchTeacher(){
    struct teacher t;
    FILE *fp;
    int id, found =0;
    fp = fopen("teacher.dat","rb");
    if (fp == NULL){
        printf("No records found! \n");
        return;
    }
    printf("Enter Teacher ID to search: ");
    scanf("%d", &id);

    while(fread(&t, sizeof(t), 1,fp)) {
        if(t.id == id){
            printf("Record Found:\n");
            printf("ID: %d\nName: %s\nSalary: %d.2f\n", t.id,t.name,t.salary);
            found = 1;
            break;
        }
    }
    if(!found)
    printf("Teacher not found!\n");
    fclose(fp);
}
int main() {
    int choice;
    do {
        printf("\n ====Teacher Management System ====\n");
        printf("1. Add Teacher\n");
        printf("2. Display Teacher:\n");
        printf("3. Search Teacher\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1){
            printf("Invalid input! Enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        switch (choice) {
            case 1:
            addTeacher();
            break;
            case 2:
            displayTeacher();
            break;
            case 3:
            searchTeacher();
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