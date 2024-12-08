#include <stdio.h>

#define MAX_COURSES 10
#define MAX_STUDENTS 50

int main() {
    int numCourses, numStudents[MAX_COURSES];
    char courseNames[MAX_COURSES][50];
    char studentNames[MAX_COURSES][MAX_STUDENTS][50];
    float grades[MAX_COURSES][MAX_STUDENTS];
    float averages[MAX_COURSES] = {0};

    // Input number of courses
    printf("Enter the number of courses: ");
    scanf("%d", &numCourses);

    // Input course names and number of students for each course
    for (int i = 0; i < numCourses; i++) {
        printf("Enter the name of course %d: ", i + 1);
        scanf("%s", courseNames[i]);
        printf("Enter the number of students in %s: ", courseNames[i]);
        scanf("%d", &numStudents[i]);
    }

    // Input student names and their grades for each course
    for (int i = 0; i < numCourses; i++) {
        printf("\nEntering grades for %s:\n", courseNames[i]);
        for (int j = 0; j < numStudents[i]; j++) {
            printf("Enter the name of student %d: ", j + 1);
            scanf("%s", studentNames[i][j]);
            printf("Enter the grade for %s: ", studentNames[i][j]);
            scanf("%f", &grades[i][j]);
        }
    }

    // Calculate averages for each course
    for (int i = 0; i < numCourses; i++) {
        float sum = 0;
        for (int j = 0; j < numStudents[i]; j++) {
            sum += grades[i][j];
        }
        averages[i] = sum / numStudents[i];
    }

    // Display each course as a separate table
    printf("\nResults:\n");
    for (int i = 0; i < numCourses; i++) {
        printf("\nCourse: %s\n", courseNames[i]);
        printf("%-20s%-10s\n", "Student Name", "Grade");

        for (int j = 0; j < numStudents[i]; j++) {
            printf("%-20s%-10.2f\n", studentNames[i][j], grades[i][j]);
        }

        printf("Average Grade for %s: %.2f\n", courseNames[i], averages[i]);
    }

    return 0;
}