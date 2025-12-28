//Sart Home (admin) Management System
#include<stdio.h>
#include<stdlib.h>
struct homeAdmin{
    int AdminID;
    char Name [50];
    float Salary;
};
void addAdmin() {
    struct homeAdmin h;
    FILE *fp;
    fp = fopen("smarthome.dat", "ab");
    if(fp == NULL) {
      printf("File error!\n"); 
      return; 
    }
    printf("Enter Admin ID: ");
    scanf("%d", &h.AdminID);
    printf("Enter Admin Name: ");
    scanf("%s", &h.Name);
    printf("Enter Salary: ");
    scanf("%f", &h.Salary);
    fwrite(&h, sizeof(h),1,fp);
    fclose(fp);
    printf("Admin added successfully! \n");
}
void displayAdmin() {
    struct homeAdmin h;
    FILE *fp;
    fp = fopen("smarthome.dat","rb");
    if(fp == NULL){
        printf("No records found!\n");
        return;
    }
    printf("\n--Admin records---\n");
     while(fread(&h, sizeof(h), 1, fp)) {
        printf("Admin ID: %d | Admin Name: %s | Salary: %2f\n",h.AdminID, h.Name, h.Salary);
    }
    fclose(fp);
}
void searchAdmin(){
    struct homeAdmin h;
    FILE *fp;
    int id, found =0;
    fp = fopen("smarthome.dat","rb");
    if (fp == NULL){
        printf("No records found! \n");
        return;
    }
    printf("Enter admin to search: ");
    scanf("%d", &id);

    while(fread(&h, sizeof(h), 1,fp)) {
        if(h.AdminID== id){
            printf("Record Found:\n");
            printf(" Admin Id: %d\n Admin Name: %s\nSalary: %d.2f\n", h.AdminID,h.Name,h.Salary);
            found = 1;
            break;
        }
    }
    if(!found)
    printf("Admin not found!\n");
    fclose(fp);
}
int main() {
    int choice;
    do {
        printf("\n ====Smart Home (Admin) Management System ====\n");
        printf("1. Add Admin\n");
        printf("2. Display Admin:\n");
        printf("3. Search Admin\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1){
            printf("Invalid input! Enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        switch (choice) {
            case 1:
            addAdmin();
            break;
            case 2:
            displayAdmin();
            break;
            case 3:
            searchAdmin();
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