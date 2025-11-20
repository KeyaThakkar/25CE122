#include <stdio.h>

// Function to calculate length manually
int length(char s[]) {
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

// Reverse a string manually
void reverse(char s[], char r[]) {
    int len = length(s);
    int i;
    for (i = 0; i < len; i++) {
        r[i] = s[len - i - 1];
    }
    r[i] = '\0';
}

// Compare two notes manually
int compare(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] != b[i])
            return (a[i] - b[i]); // Non-zero means difference
        i++;
    }
    return 0; // equal
}

// Copy a note manually
void copy(char src[], char dest[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Concatenate two notes manually
void concatenate(char a[], char b[], char result[]) {
    int i = 0, j = 0;

    // Copy a
    while (a[i] != '\0') {
        result[i] = a[i];
        i++;
    }

    // Append b
    while (b[j] != '\0') {
        result[i] = b[j];
        i++;
        j++;
    }

    result[i] = '\0';
}

// Convert to uppercase manually
void toUpper(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        i++;
    }
}

// Convert to lowercase manually
void toLower(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        i++;
    }
}

// Capitalize first letter of each word
void capitalizeWords(char s[]) {
    int i = 0;

    // Capitalize first char if alphabet
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - 32;

    while (s[i] != '\0') {
        if (s[i] == ' ' && s[i + 1] != '\0') {
            if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
                s[i + 1] = s[i + 1] - 32;
        }
        i++;
    }
}

int main() {
    char note1[200], note2[200], result[300], temp[200];
    int choice;

    printf("Enter a note: ");
    scanf(" %[^\n]", note1);

    while (1) {
        printf("\n====== Alex's Note Manager ======\n");
        printf("1. Length of Note\n");
        printf("2. Reverse Note\n");
        printf("3. Compare Two Notes\n");
        printf("4. Copy Note\n");
        printf("5. Concatenate Notes\n");
        printf("6. Convert to UPPERCASE\n");
        printf("7. Convert to lowercase\n");
        printf("8. Capitalize Each Word\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear buffer

        switch (choice) {
            case 1:
                printf("Length = %d characters\n", length(note1));
                break;

            case 2:
                reverse(note1, result);
                printf("Reversed: %s\n", result);
                break;

            case 3:
                printf("Enter another note: ");
                scanf(" %[^\n]", note2);
                if (compare(note1, note2) == 0)
                    printf("Notes are SAME.\n");
                else
                    printf("Notes are DIFFERENT.\n");
                break;

            case 4:
                copy(note1, temp);
                printf("Copied Note: %s\n", temp);
                break;

            case 5:
                printf("Enter another note to merge: ");
                scanf(" %[^\n]", note2);
                concatenate(note1, note2, result);
                printf("Concatenated: %s\n", result);
                break;

            case 6:
                toUpper(note1);
                printf("UPPERCASE: %s\n", note1);
                break;

            case 7:
                toLower(note1);
                printf("lowercase: %s\n", note1);
                break;

            case 8:
                toLower(note1);       // ensure proper formatting
                capitalizeWords(note1);
                printf("Capitalized: %s\n", note1);
                break;

            case 9:
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
