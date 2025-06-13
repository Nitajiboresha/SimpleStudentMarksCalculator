#include <stdio.h>

int main() {
    //  Create variables to enable the user to input the subjects and their marks, calculates total, and avarage:
    char stdSubjects[5][100];
    float stdMarks[5];
    float total = 0.0;
    float stdAvarage;

    //  Loop to enable input of subjects and their marks values:
    for(int a = 0; a < 5; a++) {
        printf("Subject %d:\n", a + 1);
        scanf("%s", stdSubjects[a]);
        printf("Marks %s:\n", stdSubjects[a]);
        scanf("%f", &stdMarks[a]);
        //  Adds each mark to the total:
        total += stdMarks[a];
    }

    //  Calculate avarage:
    stdAvarage = total / 5;

    //  Prints total and rounds it off to 2 decimal places:
    printf("Total = %.2f\n", total);

    //  Prints avarage as a percentage:
    printf("Avarage = %.2f%%\n", stdAvarage);

    //  Checks if the student has passed or failed:
    stdAvarage >= 50 ? printf("PASS!") : printf("FAIL");
    
    return 0;
}