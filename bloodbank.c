//Blood Bank Management System
#include<stdio.h>
#include<stdlib.h>
struct bloodbank{
    int bloodID;
    char donarName [50];
    float type;
};
void addBlood() {
    struct bloodbank b;
    FILE *fp;
    fp = fopen("bloodbank.dat", "ab");
    if(fp == NULL) {
      printf("File error!\n"); 
      return; 
    }
    printf("Enter blood ID: ");
    scanf("%d", &b.bloodID);
    printf("Enter Donar Name: ");
    scanf("%s", &b.donarName);
    printf("Enter Blood Type: ");
    scanf("%f", &b.type);
    fwrite(&b, sizeof(b),1,fp);
    fclose(fp);
    printf("Blood Group added successfully! \n");
}
void displayBloodGroup() {
    struct bloodbank b;
    FILE *fp;
    fp = fopen("bloodbank.dat","rb");
    if(fp == NULL){
        printf("No records found!\n");
        return;
    }
    printf("\n--Blood Bank records---\n");
     while(fread(&b, sizeof(b), 1, fp)) {
        printf("Blood ID: %d |Donar Name: %s | Blood Type: %2f\n",b.bloodID, b.donarName, b.type);
    }
    fclose(fp);
}
void searchBloodGroup(){
    struct bloodbank b;
    FILE *fp;
    int id, found =0;
    fp = fopen("bloodbank.dat","rb");
    if (fp == NULL){
        printf("No records found! \n");
        return;
    }
    printf("Enter blood ID to search: ");
    scanf("%d", &id);

    while(fread(&b, sizeof(b), 1,fp)) {
        if(b.bloodID== id){
            printf("Record Found:\n");
            printf("Blood Id: %d\nDonar Name: %s\nBlood Type: %d.2f\n", b.bloodID,b.donarName,b.type);
            found = 1;
            break;
        }
    }
    if(!found)
    printf("Blood Group not found!\n");
    fclose(fp);
}
int main() {
    int choice;
    do {
        printf("\n ====Blood Bank Management System ====\n");
        printf("1. Add Blood Group\n");
        printf("2. Display Blood Group:\n");
        printf("3. Search Blood Group\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1){
            printf("Invalid input! Enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        switch (choice) {
            case 1:
            addBlood();
            break;
            case 2:
            displayBloodGroup();
            break;
            case 3:
            searchBloodGroup();
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