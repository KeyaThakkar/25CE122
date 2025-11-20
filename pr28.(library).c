#include <stdio.h>
#include <string.h>

// Union to store book details (only one field used at a time)
union Book {
    int accessionNumber;
    char title[50];
    char author[50];
    float price;
    int issuedFlag;     // 1 = issued, 0 = available
};

int main() {
    union Book book;

    int choice;

    printf("\n===== Library Book Entry System =====\n");

    printf("\nEnter Accession Number: ");
    scanf("%d", &book.accessionNumber);
    int accNo = book.accessionNumber;   // Store before overwritten

    printf("Enter Book Title: ");
    scanf(" %[^\n]", book.title);
    char title[50];
    strcpy(title, book.title);          // Copy before overwritten

    printf("Enter Author Name: ");
    scanf(" %[^\n]", book.author);
    char author[50];
    strcpy(author, book.author);        // Copy before overwritten

    printf("Enter Price: ");
    scanf("%f", &book.price);
    float price = book.price;           // Store before overwritten

    printf("Is the book issued? (1 = Yes, 0 = No): ");
    scanf("%d", &book.issuedFlag);
    int flag = book.issuedFlag;         // Store before overwritten

    // Displaying stored values
    printf("\n\n===== Book Details =====\n");
    printf("Accession Number : %d\n", accNo);
    printf("Title            : %s\n", title);
    printf("Author           : %s\n", author);
    printf("Price            : %.2f\n", price);

    if (flag == 1)
        printf("Status           : Issued\n");
    else
        printf("Status           : Available\n");

    printf("Name: Keya Thakkar\n");
    printf("ID: 25CE122");


    return 0;
}
