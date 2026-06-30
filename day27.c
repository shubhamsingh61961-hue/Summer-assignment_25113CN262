// programe 1
#include <stdio.h>

int main()
{
    // Declare variables
    int rollNo;
    char name[50];
    float marks;

    // Input student details
    printf("===== Student Record Management System =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    // Display student details
    printf("\n----- Student Record -----\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Name        : %s\n", name);
    printf("Marks       : %.2f\n", marks);

    // End of program
    return 0;
}

//programe 2
#include <stdio.h>

int main()
{
    // Declare variables
    int empId;
    char empName[50];
    char department[30];
    float salary;

    // Input employee details
    printf("===== Employee Management System =====\n");

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", empName);

    printf("Enter Department: ");
    scanf(" %[^\n]", department);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    // Display employee details
    printf("\n----- Employee Details -----\n");
    printf("Employee ID : %d\n", empId);
    printf("Name        : %s\n", empName);
    printf("Department  : %s\n", department);
    printf("Salary      : %.2f\n", salary);

    // End of program
    return 0;
}

// programe 3

#include <stdio.h>

int main()
{
    // Declare variables
    char empName[50];
    float basicSalary, hra, da, grossSalary;

    // Input employee name
    printf("===== Salary Management System =====\n");

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", empName);

    // Input basic salary
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    // Calculate HRA (20%)
    hra = basicSalary * 0.20;

    // Calculate DA (10%)
    da = basicSalary * 0.10;

    // Calculate Gross Salary
    grossSalary = basicSalary + hra + da;

    // Display salary details
    printf("\n----- Salary Details -----\n");
    printf("Employee Name : %s\n", empName);
    printf("Basic Salary  : %.2f\n", basicSalary);
    printf("HRA           : %.2f\n", hra);
    printf("DA            : %.2f\n", da);
    printf("Gross Salary  : %.2f\n", grossSalary);

    // End of program
    return 0;
}
// programe 4
#include <stdio.h>

int main()
{
    // Declare variables
    char name[50];
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    // Display program title
    printf("===== Marksheet Generation System =====\n");

    // Input student details
    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    // Input marks of five subjects
    printf("Enter Marks of Subject 1: ");
    scanf("%f", &m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &m3);

    printf("Enter Marks of Subject 4: ");
    scanf("%f", &m4);

    printf("Enter Marks of Subject 5: ");
    scanf("%f", &m5);

    // Calculate total marks
    total = m1 + m2 + m3 + m4 + m5;

    // Calculate percentage
    percentage = total / 5;

    // Display student details
    printf("\n========== MARKSHEET ==========\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", rollNo);

    // Display marks
    printf("Subject 1 : %.2f\n", m1);
    printf("Subject 2 : %.2f\n", m2);
    printf("Subject 3 : %.2f\n", m3);
    printf("Subject 4 : %.2f\n", m4);
    printf("Subject 5 : %.2f\n", m5);

    // Display total and percentage
    printf("\nTotal Marks : %.2f / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    // Display grade
    if (percentage >= 90)
        printf("Grade : A+\n");
    else if (percentage >= 75)
        printf("Grade : A\n");
    else if (percentage >= 60)
        printf("Grade : B\n");
    else if (percentage >= 40)
        printf("Grade : C\n");
    else
        printf("Grade : Fail\n");

    // End of program
    return 0;
}