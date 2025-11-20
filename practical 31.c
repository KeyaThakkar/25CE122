#include <stdio.h>
#include <stdlib.h>

int main() {
    char *summary;
    int initial_size, new_size;

    // Step 1: Allocate memory using calloc()
    printf("Enter initial memory size for summary: ");
    scanf("%d", &initial_size);
    getchar(); // clear newline from buffer

    summary = (char *)calloc(initial_size, sizeof(char));
    if (summary == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Step 2: Input initial string
    printf("Enter the initial article summary: ");
    fgets(summary, initial_size, stdin);

    printf("\nInitial Summary: %s\n", summary);

    // Step 3: Reallocate memory using realloc()
    printf("\nEnter new size to expand the summary: ");
    scanf("%d", &new_size);
    getchar(); // clear newline

    summary = (char *)realloc(summary, new_size * sizeof(char));
    if (summary == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    printf("Enter the expanded article summary: ");
    fgets(summary, new_size, stdin);

    // Step 4: Display updated string
    printf("\nUpdated Summary: %s\n", summary);

    // Free memory
    free(summary);
 printf("Name: Keya Thakkar\n");
 printf("ID: 25CE122");
    return 0;
}
