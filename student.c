/*Student Management System*/
#include<stdio.h>
#include<stdlib.h>
struct student { //Structure to store student information//
    int roll;
    char name[50];
    float marks;
};
void addStudent() { //Function to add a student record//
    struct student s; //Declare structure variable//
    FILE *fp; //File pointer//
    fp = fopen("Student.dat", "ab");//Open file in append binary mode //
    if (fp == NULL){// Check if file opened successfully //
        printf("File error! \n");
        return;
    }
    printf("Enter Roll Number: ");//Take student details from user//
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf(" %[^\n]",s.name);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp); // write student record into file
    fclose(fp);
    printf("Student added successfully \n");
}
void displayStudent() {
    struct student s;
    FILE *fp;
    fp=fopen("student.dat","rb");
    if(fp == NULL){
        printf("NO records found!\n");
        return;
    }
    printf("\n -- Student Records --\n");
    while (fread(&s, sizeof(s), 1, fp)){
        printf("Roll: %d | Name: %s | Marks: %d.2f\n", s.roll, s.name, s.marks);
    }
    fclose(fp);
}
void searchStudent() {
    struct student s;
    FILE *fp;
    int roll, found =0;
    fp = fopen("student.dat","rb");
    if(fp == NULL){
        printf("No records found!\n");
        return ;
    }
    printf("Enter roll number to search: ");
    scanf("%d", &roll);
    while (fread(&s, sizeof(s), 1, fp)) {
        if(s.roll == roll) {
            printf("Record Found: \n");
            printf("Roll: %d\nName: %s\nMarks: %2f\n", s.roll,s.name,s.marks);
            found = 1;
            break;
        }
    }
    if(!found)
    printf("Student not found!\n");
    fclose(fp);
}
int main()
{
    int choice;
    do {
        printf("\n====Student Management System == \n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if(scanf("%d", &choice) != 1){
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
            addStudent();
            break;
            case 2:
            displayStudent();
            break;
            case 3:
            searchStudent();
            break;
            case 4:
            printf("Exiting...\n");
            break;
            default:
            printf("Invalid choice !\n");
        }
    }
    while (choice != 4);
    return 0;
}