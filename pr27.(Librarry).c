#include <stdio.h>

union Book {
    int accessionNumber;
    char title[50];
    char author[50];
    float price;
    int issued;   // 1 = issued, 0 = available
};

int main() {
    union Book b;   // only one field is stored at a time

    // Input book details (one at a time)
    printf("Enter Accession Number: ");
    scanf("%d", &b.accessionNumber);
    int acc = b.accessionNumber;   // store safely

    printf("Enter Book Title: ");
    getchar();  // to clear newline
    fgets(b.title, 50, stdin);
    char title[50];
    strcpy(title, b.title); // store safely

    printf("Enter Author Name: ");
    fgets(b.author, 50, stdin);
    char author[50];
    strcpy(author, b.author);   // store safely

    printf("Enter Price: ");
    scanf("%f", &b.price);
    float price = b.price;   // store safely

    printf("Is the book issued? (1 = Yes, 0 = No): ");
    scanf("%d", &b.issued);
    int issued = b.issued;    // store safely

    // Display details
    printf("\n--- Book Details Entered ---\n");
    printf("Accession Number : %d\n", acc);
    printf("Title            : %s", title);
    printf("Author           : %s", author);
    printf("Price            : ₹%.2f\n", price);

    if (issued == 1)
        printf("Status           : ISSUED\n");
    else
        printf("Status           : AVAILABLE\n");

    return 0;
}
