#include <stdio.h>

int main() {
    int i, j, s, rows=4;

    for (i = 1; i <= rows; i++) {

        for (s = 1; s <= rows - i; s++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }

        for (j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }

    for (i = rows - 1; i >= 1; i--) {

        for (s = 1; s <= rows - i; s++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }

        for (j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }

    return 0;
}
