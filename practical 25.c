#include <stdio.h>
#include <string.h>

#define MAX 20

// Structure for each book
struct Book {
    char title[50];
    int available;   // 1 = available, 0 = borrowed
};

// Global book database
struct Book library[MAX] = {
    {"C Programming", 1},
    {"Data Structures", 1},
    {"Operating Systems", 1},
    {"Database Systems", 1},
    {"Python Basics", 1}
};

int totalBooks = 5;
void displayBooks() {
    printf("\nAvailable Books:\n");
    int found = 0;

    for (int i = 0; i < totalBooks; i++) {
        if (library[i].available == 1) {
            printf("- %s\n", library[i].title);
            found = 1;
        }
    }

    if (!found)
        printf("No books available.\n");
}
int getTotalBooks() {
    return totalBooks;
}
void borrowBook(char *bookName) {
    for (int i = 0; i < totalBooks; i++) {
        if (strcmp(library[i].title, bookName) == 0) {

            if (library[i].available == 1) {
                library[i].available = 0;   // mark as borrowed
                printf("\nYou have successfully borrowed \"%s\".\n", bookName);
            } else {
                printf("\nSorry! \"%s\" is already borrowed.\n", bookName);
            }
            return;
        }
    }

    printf("\nBook not found in library.\n");
}
float calculateFine(int daysLate) {
    float finePerDay = 2.5;

    if (daysLate < 0) {
        printf("\nInvalid input! Days late cannot be negative.\n");
        return 0.0;
    }
    return daysLate * finePerDay;
}
int main() {
    int choice, days;
    char bookName[50];

    while (1) {
        printf("\n========= Library Manager =========\n");
        printf("1. Display Available Books\n");
        printf("2. Get Total Number of Books\n");
        printf("3. Borrow a Book\n");
        printf("4. Calculate Fine\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar(); // clear buffer

        switch (choice) {
            case 1:
                displayBooks();
                break;

            case 2:
                printf("\nTotal Books: %d\n", getTotalBooks());
                break;

            case 3:
                printf("\nEnter book name to borrow: ");
                scanf(" %[^\n]", bookName);
                borrowBook(bookName);
                break;

            case 4:
                printf("\nEnter number of days overdue: ");
                scanf("%d", &days);
                printf("Fine = %.2f\n", calculateFine(days));
                break;

            case 5:
                printf("Name: Keya Thakkar\n");
                printf("ID: 25CE122");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
