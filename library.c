//Library Management System
#include<stdio.h>
#include<stdlib.h>
struct book{
    int bookID;
    char name [50];
    float Price;
};
void addBook() {
    struct book b;
    FILE *fp;
    fp = fopen("product.dat", "ab");
    if(fp == NULL) {
      printf("File error!\n"); 
      return; 
    }
    printf("Enter book ID: ");
    scanf("%d", &b.bookID);
    printf("Enter Book Name: ");
    scanf("%s", &b.name);
    printf("Enter Book: ");
    scanf("%f", &b.Price);
    fwrite(&b, sizeof(b),1,fp);
    fclose(fp);
    printf("Book added successfully! \n");
}
void displayBook() {
    struct book b;
    FILE *fp;
    fp = fopen("book.dat","rb");
    if(fp == NULL){
        printf("No records found!\n");
        return;
    }
    printf("\n--Book records---\n");
     while(fread(&b, sizeof(b), 1, fp)) {
        printf("Book ID: %d |Name: %s | Price: %2f\n",b.bookID, b.name, b.Price);
    }
    fclose(fp);
}
void searchBook(){
    struct book b;
    FILE *fp;
    int id, found =0;
    fp = fopen("book.dat","rb");
    if (fp == NULL){
        printf("No records found! \n");
        return;
    }
    printf("Enter book ID to search: ");
    scanf("%d", &id);

    while(fread(&b, sizeof(b), 1,fp)) {
        if(b.bookID== id){
            printf("Record Found:\n");
            printf("Book Id: %d\nName: %s\nPrice: %d.2f\n", b.bookID,b.name,b.Price);
            found = 1;
            break;
        }
    }
    if(!found)
    printf("Book not found!\n");
    fclose(fp);
}
int main() {
    int choice;
    do {
        printf("\n ====Book Management System ====\n");
        printf("1. Add Book\n");
        printf("2. Display Book:\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1){
            printf("Invalid input! Enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        switch (choice) {
            case 1:
            addBook();
            break;
            case 2:
            displayBook();
            break;
            case 3:
            searchBook();
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