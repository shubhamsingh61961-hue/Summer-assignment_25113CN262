// programe 1

#include <stdio.h>

int main()
{
    // Declare variables
    int i, n;
    int roll[100];
    float marks[100];
    char name[100][50];

    // Input number of students
    printf("===== Student Record System =====\n");
    printf("Enter Number of Students: ");
    scanf("%d", &n);

    // Input details of each student
    for(i = 0; i < n; i++)
    {
        printf("\nEnter Details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    // Display all student records
    printf("\n========== STUDENT RECORDS ==========\n");

    printf("\nRoll No\tName\t\tMarks\n");
    printf("----------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-15s%.2f\n", roll[i], name[i], marks[i]);
    }

    // End of program
    return 0;
}
// programe 2

#include <stdio.h>

int main()
{
    // Declare variables
    int i, n;
    int bookId[100];
    char bookName[100][50];
    char author[100][50];

    // Input number of books
    printf("===== Mini Library System =====\n");

    printf("Enter Number of Books: ");
    scanf("%d", &n);

    // Input details of each book
    for(i = 0; i < n; i++)
    {
        printf("\nEnter Details of Book %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Enter Book Name: ");
        scanf(" %[^\n]", bookName[i]);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", author[i]);
    }

    // Display all book records
    printf("\n========== LIBRARY RECORD ==========\n");

    printf("\nBook ID\tBook Name\t\tAuthor\n");
    printf("----------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-20s%s\n", bookId[i], bookName[i], author[i]);
    }

    // End of program
    return 0;
}
// programe 3

#include <stdio.h>

int main()
{
    // Declare variables
    int i, n;
    int empId[100];
    char empName[100][50];
    char department[100][30];
    float salary[100];

    // Input number of employees
    printf("===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
    printf("Enter Number of Employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter Details of Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", empName[i]);

        printf("Enter Department: ");
        scanf(" %[^\n]", department[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display employee records
    printf("\n========== EMPLOYEE RECORDS ==========\n");
    printf("ID\tName\t\tDepartment\tSalary\n");
    printf("------------------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-15s%-15s%.2f\n",
               empId[i], empName[i], department[i], salary[i]);
    }

    // End of program
    return 0;
}
// programe 4

#include <stdio.h>

// Function to input student details
void addStudent(int roll[], char name[][30], float marks[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }
}

// Function to display student details
void displayStudent(int roll[], char name[][30], float marks[], int n)
{
    int i;

    printf("\nRoll No\tName\t\tMarks\n");
    printf("--------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-10s\t%.2f\n", roll[i], name[i], marks[i]);
    }
}

int main()
{
    // Declare variables
    int n;
    int roll[50];
    char name[50][30];
    float marks[50];

    // Input number of students
    printf("Enter Number of Students: ");
    scanf("%d", &n);

    // Call function to add student records
    addStudent(roll, name, marks, n);

    // Call function to display student records
    displayStudent(roll, name, marks, n);

    // End of program
    return 0;
}