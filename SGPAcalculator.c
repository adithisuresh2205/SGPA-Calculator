#include <stdio.h>
#include <string.h>

float getGradePoint(char grade[]) {
    if (strcmp(grade, "O") == 0) return 10.0;
    else if (strcmp(grade, "A+") == 0) return 9.5;
    else if (strcmp(grade, "A") == 0) return 9.0;
    else if (strcmp(grade, "B+") == 0) return 8.0;
    else if (strcmp(grade, "B") == 0) return 7.0;
    else if (strcmp(grade, "C") == 0) return 6.0;
    else if (strcmp(grade, "P") == 0) return 5.0;
    else if (strcmp(grade, "F") == 0) return 0.0;
    else return -1.0; 
}

int main() {
    int n;
    char grade[3]; // 
    float credit, totalCredits = 0.0, totalPoints = 0.0;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("\nSubject %d:\n", i);
        printf("Enter letter grade (O, A+, A, B+, B, C, P, F): ");
        scanf("%s", grade);
        
        float gradePoint = getGradePoint(grade);
        if (gradePoint == -1.0) {
            printf("Invalid grade entered. Please try again.\n");
            i--; 
            continue;
        }

        printf("Enter credit for this subject: ");
        scanf("%f", &credit);

        totalPoints += gradePoint * credit;
        totalCredits += credit;
    }

    if (totalCredits == 0.0) {
        printf("\nTotal credits cannot be zero.\n");
    } else {
        float sgpa = totalPoints / totalCredits;
        printf("\nYour SGPA is: %.2f\n", sgpa);
    }

    return 0;
}
