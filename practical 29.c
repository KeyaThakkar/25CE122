#include <stdio.h>
#include <string.h>

#define MAX 50   // Maximum teams

// Sub-structure for coach
struct Coach {
    char name[50];
    int age;
    int experience;
};

// Main structure for team
struct Team {
    char teamName[50];
    char sport[30];
    struct Coach coach;  // Nested structure
};

struct Team teams[MAX];
int teamCount = 0;

// Function to check duplicate team
int isDuplicate(char name[]) {
    for (int i = 0; i < teamCount; i++) {
        if (strcmp(teams[i].teamName, name) == 0) {
            return 1;
        }
    }
    return 0;
}

void addTeam() {
    if (teamCount >= MAX) {
        printf("Maximum team limit reached!\n");
        return;
    }

    struct Team t;
    printf("\nEnter Team Name: ");
    scanf(" %[^\n]", t.teamName);

    if (isDuplicate(t.teamName)) {
        printf("Team already exists! Duplicate entry not allowed.\n");
        return;
    }

    printf("Enter Sport Type: ");
    scanf(" %[^\n]", t.sport);

    // Coach details
    printf("Enter Coach Name: ");
    scanf(" %[^\n]", t.coach.name);

    printf("Enter Coach Age: ");
    scanf("%d", &t.coach.age);

    printf("Enter Coach Experience (years): ");
    scanf("%d", &t.coach.experience);

    teams[teamCount++] = t;
    printf("Team added successfully!\n");
}

void searchTeam() {
    char key[50];
    printf("\nSearch by Team Name or Sport: ");
    scanf(" %[^\n]", key);

    int found = 0;
    for (int i = 0; i < teamCount; i++) {
        if (strcmp(teams[i].teamName, key) == 0 ||
            strcmp(teams[i].sport, key) == 0) {

            printf("\n--- Team Found ---\n");
            printf("Team Name: %s\n", teams[i].teamName);
            printf("Sport: %s\n", teams[i].sport);
            printf("Coach Name: %s\n", teams[i].coach.name);
            printf("Coach Age: %d\n", teams[i].coach.age);
            printf("Coach Experience: %d years\n", teams[i].coach.experience);

            found = 1;
        }
    }

    if (!found) {
        printf("No matching team found.\n");
    }
}

void displayTeams() {
    if (teamCount == 0) {
        printf("\nNo teams to display.\n");
        return;
    }

    printf("\n---- All Teams ----\n");
    for (int i = 0; i < teamCount; i++) {
        printf("\nTeam %d\n", i + 1);
        printf("Team Name: %s\n", teams[i].teamName);
        printf("Sport: %s\n", teams[i].sport);
        printf("Coach Name: %s\n", teams[i].coach.name);
        printf("Coach Age: %d\n", teams[i].coach.age);
        printf("Coach Experience: %d years\n", teams[i].coach.experience);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n==== Sports Team Management ====\n");
        printf("1. Add Team\n");
        printf("2. Search Team\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addTeam(); break;
            case 2: searchTeam(); break;
            case 3: displayTeams(); break;
            case 4: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
