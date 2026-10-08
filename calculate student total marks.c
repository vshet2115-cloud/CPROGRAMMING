#include <stdio.h>

int main() {
    int n, i, marks, total = 0;
    float percentage;
    char grade;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%d", &marks);
        total += marks;
    }

    percentage = (float)total / (n * 100) * 100;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 50)
        grade = 'E';
    else
        grade = 'F';

    printf("\nTotal Marks = %d/%d", total, n * 100);
    printf("\nPercentage = %.2f%%", percentage);
    printf("\nGrade = %c\n", grade);

    return 0;
}