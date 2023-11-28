#include <stdio.h>

#define A_PLUS_MIN 80
#define A_MIN 75
#define A_MINUS_MIN 70
#define B_PLUS_MIN 65
#define B_MIN 60
#define B_MINUS_MIN 55
#define C_PLUS_MIN 50
#define C_MIN 45
#define D_MIN 40
#define F_MIN 0

#define CALCULATE_CGPA(marks) \
    (marks >= A_PLUS_MIN) ? 4.00 : \
    (marks >= A_MIN) ? 3.75 : \
    (marks >= A_MINUS_MIN) ? 3.50 : \
    (marks >= B_PLUS_MIN) ? 3.25 : \
    (marks >= B_MIN) ? 3.00 : \
    (marks >= B_MINUS_MIN) ? 2.75 : \
    (marks >= C_PLUS_MIN) ? 2.50 : \
    (marks >= C_MIN) ? 2.25 : \
    (marks >= D_MIN) ? 2.00 : 0.00

#define DETERMINE_LETTER_GRADE(marks) \
    (marks >= A_PLUS_MIN) ? "A+" : \
    (marks >= A_MIN) ? "A" : \
    (marks >= A_MINUS_MIN) ? "A-" : \
    (marks >= B_PLUS_MIN) ? "B+" : \
    (marks >= B_MIN) ? "B" : \
    (marks >= B_MINUS_MIN) ? "B-" : \
    (marks >= C_PLUS_MIN) ? "C+" : \
    (marks >= C_MIN) ? "C" : \
    (marks >= D_MIN) ? "D" : "F"

int main() {

    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    double cgpa = CALCULATE_CGPA(marks);
    const char *letterGrade = DETERMINE_LETTER_GRADE(marks);

    printf("CGPA: %.2f\n", cgpa);
    printf("Letter Grade: %s\n", letterGrade);

    return 0;
}
