// programe 1

#include <stdio.h>

int main()
{
    // Declare variables
    int bookId;
    char bookName[50];
    char author[50];

    // Display program title
    printf("===== Library Management System =====\n");

    // Input book details
    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", bookName);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", author);

    // Display book details
    printf("\n----- Book Details -----\n");
    printf("Book ID     : %d\n", bookId);
    printf("Book Name   : %s\n", bookName);
    printf("Author Name : %s\n", author);

    return 0;
}

// programe 2

#include <stdio.h>

int main()
{
    // Declare variables
    int accountNo, choice;
    char name[50];
    float balance = 0, amount;

    // Input account details
    printf("===== Bank Account System =====\n");

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", name);

    // Menu-driven program
    do
    {
        printf("\n1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount Deposited Successfully.\n");
                break;

            case 2:
                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);

                if (amount <= balance)
                {
                    balance -= amount;
                    printf("Please Collect Your Cash.\n");
                }
                else
                {
                    printf("Insufficient Balance.\n");
                }
                break;

            case 3:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}

// programe 3

#include <stdio.h>

int main()
{
    // Declare variables
    char name[50];
    int tickets;
    float price = 250.0, total;

    // Display title
    printf("===== Ticket Booking System =====\n");

    // Input customer details
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    // Calculate total amount
    total = tickets * price;

    // Display booking details
    printf("\n----- Ticket Details -----\n");
    printf("Customer Name : %s\n", name);
    printf("Tickets       : %d\n", tickets);
    printf("Price/Ticket  : %.2f\n", price);
    printf("Total Amount  : %.2f\n", total);

    return 0;
}

// programe 4

#include <stdio.h>

int main()
{
    // Declare variables
    char name[50];
    char phone[15];
    char email[50];

    // Display title
    printf("===== Contact Management System =====\n");

    // Input contact details
    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Phone Number: ");
    scanf("%s", phone);

    printf("Enter Email ID: ");
    scanf("%s", email);

    // Display contact details
    printf("\n----- Contact Details -----\n");
    printf("Name         : %s\n", name);
    printf("Phone Number : %s\n", phone);
    printf("Email ID     : %s\n", email);

    return 0;
}
