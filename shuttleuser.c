//Shuttle (user) Management System
#include<stdio.h>
#include<stdlib.h>
struct shuttleUser{
    int UserID;
    char Name [50];
    float Fare;
};
void addUser() {
    struct shuttleUser u;
    FILE *fp;
    fp = fopen("shutuser.dat", "ab");
    if(fp == NULL) {
      printf("File error!\n"); 
      return; 
    }
    printf("Enter shuttle User ID: ");
    scanf("%d", &u.UserID);
    printf("Enter User Name: ");
    scanf("%s", &u.Name);
    printf("Enter Fare: ");
    scanf("%f", &u.Fare);
    fwrite(&u, sizeof(u),1,fp);
    fclose(fp);
    printf("User added successfully! \n");
}
void displayUser() {
    struct shuttleUser u;
    FILE *fp;
    fp = fopen("shuttleUser.dat","rb");
    if(fp == NULL){
        printf("No records found!\n");
        return;
    }
    printf("\n--Shuttle User records---\n");
     while(fread(&u, sizeof(u), 1, fp)) {
        printf("Shuttle Employee ID: %d | User Name: %s | Fare: %2f\n",u.UserID, u.Name, u.Fare);
    }
    fclose(fp);
}
void searchUser(){
    struct shuttleUser u;
    FILE *fp;
    int id, found =0;
    fp = fopen("shuttleUser.dat","rb");
    if (fp == NULL){
        printf("No records found! \n");
        return;
    }
    printf("Enter user to search: ");
    scanf("%d", &id);

    while(fread(&u, sizeof(u), 1,fp)) {
        if(u.UserID== id){
            printf("Record Found:\n");
            printf(" Shuttle Emp Id: %d\nEmployee Name: %s\nSalary: %d.2f\n", s.EmpID,s.Name,s.Salary);
            found = 1;
            break;
        }
    }
    if(!found)
    printf("User not found!\n");
    fclose(fp);
}
int main() {
    int choice;
    do {
        printf("\n ====Shuttle (User) Management System ====\n");
        printf("1. Add User\n");
        printf("2. Display User:\n");
        printf("3. Search User\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1){
            printf("Invalid input! Enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        switch (choice) {
            case 1:
            addUser();
            break;
            case 2:
            displayUser();
            break;
            case 3:
            searchUser();
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