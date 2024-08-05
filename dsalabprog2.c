#include <stdio.h>

int main() {
    int marks[5][3];
    int highest[3] = {0}; // To store highest marks in each subject

    // Input marks for 5 students in 3 subjects
    printf("Enter the marks of 5 students in 3 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Determine the highest marks in each subject
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 5; i++) {
            if (marks[i][j] > highest[j]) {
                highest[j] = marks[i][j];
            }
        }
    }

    // Display the highest marks in each subject
    printf("\nHighest marks in each subject:\n");
    for (int j = 0; j < 3; j++) {
        printf("Subject %d: %d\n", j + 1, highest[j]);
    }

    return 0;
}
