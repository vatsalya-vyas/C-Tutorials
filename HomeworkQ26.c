// Q)Make a system that can store information of all
// students, teachers & staff of your college in the form
// of structures.

// You can also make this into a C Project with other
// functionalities like cgpa calculation of students,
// storing attendance etc.

#include <stdio.h>
#define MAX_STUDENTS 50
#define MAX_TEACHERS 10
#define MAX_STAFF 20

// Structure for storing student information
struct Student
{
    int rollNumber;
    char name[50];
    int age;
    float marks;
};

// Structure for storing teacher information
struct Teacher
{
    int employeeId;
    char name[50];
    int age;
    char department[50];
};

// Structure for storing staff information
struct Staff
{
    int employeeId;
    char name[50];
    int age;
    char role[50];
};

int main()
{
    struct Student students[MAX_STUDENTS];
    struct Teacher teachers[MAX_TEACHERS];
    struct Staff staff[MAX_STAFF];

    int totalStudents, totalTeachers, totalStaff, i;

    // Read the total number of students
    printf("Enter the total number of students: ");
    scanf("%d", &totalStudents);

    // Read information for each student
    printf("\nEnter the information of students:\n");
    for (i = 0; i < totalStudents; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Read the total number of teachers
    printf("\nEnter the total number of teachers: ");
    scanf("%d", &totalTeachers);

    // Read information for each teacher
    printf("\nEnter the information of teachers:\n");
    for (i = 0; i < totalTeachers; i++)
    {
        printf("\nTeacher %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &teachers[i].employeeId);
        printf("Name: ");
        scanf("%s", teachers[i].name);
        printf("Age: ");
        scanf("%d", &teachers[i].age);
        printf("Department: ");
        scanf("%s", teachers[i].department);
    }

    // Read the total number of staff
    printf("\nEnter the total number of staff: ");
    scanf("%d", &totalStaff);

    // Read information for each staff
    printf("\nEnter the information of staff:\n");
    for (i = 0; i < totalStaff; i++)
    {
        printf("\nStaff %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &staff[i].employeeId);
        printf("Name: ");
        scanf("%s", staff[i].name);
        printf("Age: ");
        scanf("%d", &staff[i].age);
        printf("Role: ");
        scanf("%s", staff[i].role);
    }

    // Display the stored information
    printf("\nStored information:\n");

    // Display student information
    printf("\nStudent Information:\n");
    for (i = 0; i < totalStudents; i++)
    {
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    // Display teacher information
    printf("\nTeacher Information:\n");
    for (i = 0; i < totalTeachers; i++)
    {
        printf("Employee ID: %d\n", teachers[i].employeeId);
        printf("Name: %s\n", teachers[i].name);
        printf("Age: %d\n", teachers[i].age);
        printf("Department: %s\n", teachers[i].department);
        printf("\n");
    }

    // Display staff information
    printf("\nStaff Information:\n");
    for (i = 0; i < totalStaff; i++)
    {
        printf("Employee ID: %d\n", staff[i].employeeId);
        printf("Name: %s\n", staff[i].name);
        printf("Age: %d\n", staff[i].age);
        printf("Role: %s\n", staff[i].role);
        printf("\n");
    }

    return 0;
}
