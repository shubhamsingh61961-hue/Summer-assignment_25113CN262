// programe 1

#include <stdio.h>

int main()
{
    // Declare variables
    int choice;
    float num1, num2, result;

    do
    {
        // Display menu
        printf("\n===== MENU-DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Exit without asking for numbers
        if (choice == 5)
        {
            printf("Thank You!\n");
            break;
        }

        // Input two numbers
        printf("Enter First Number: ");
        scanf("%f", &num1);

        printf("Enter Second Number: ");
        scanf("%f", &num2);

        // Perform selected operation
        switch (choice)
        {
            case 1:
                result = num1 + num2;
                printf("Result = %.2f\n", result);
                break;

            case 2:
                result = num1 - num2;
                printf("Result = %.2f\n", result);
                break;

            case 3:
                result = num1 * num2;
                printf("Result = %.2f\n", result);
                break;

            case 4:
                if (num2 != 0)
                {
                    result = num1 / num2;
                    printf("Result = %.2f\n", result);
                }
                else
                {
                    printf("Division by zero is not possible.\n");
                }
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (1);

    return 0;
}
// programe 2

#include <stdio.h>

int main()
{
    // Declare variables
    int arr[100], n, i, choice, sum = 0;

    // Input array size
    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter Array Elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        // Display menu
        printf("\n===== ARRAY OPERATIONS =====\n");
        printf("1. Display Array\n");
        printf("2. Find Sum\n");
        printf("3. Find Maximum\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum += arr[i];
                printf("Sum = %d\n", sum);
                break;

            case 3:
            {
                int max = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                        max = arr[i];
                }
                printf("Maximum Element = %d\n", max);
                break;
            }

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
// programe 3

#include <stdio.h>
#include <string.h>

int main()
{
    // Declare variables
    char str[100];
    int choice;

    // Input string
    printf("Enter a String: ");
    scanf(" %[^\n]", str);

    do
    {
        // Display menu
        printf("\n===== STRING OPERATIONS =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Display String\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2:
            {
                char temp[100];
                int i, len = strlen(str);

                for(i = 0; i < len; i++)
                    temp[i] = str[len - 1 - i];

                temp[len] = '\0';

                printf("Reversed String = %s\n", temp);
                break;
            }

            case 3:
                printf("String = %s\n", str);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
// programe 4

#include <stdio.h>

int main()
{
    // Declare variables
    int productId, quantity;
    char productName[50];
    float price;

    // Display title
    printf("===== Inventory Management System =====\n");

    // Input product details
    printf("Enter Product ID: ");
    scanf("%d", &productId);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", productName);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price: ");
    scanf("%f", &price);

    // Display inventory details
    printf("\n----- Product Details -----\n");
    printf("Product ID   : %d\n", productId);
    printf("Product Name : %s\n", productName);
    printf("Quantity     : %d\n", quantity);
    printf("Price        : %.2f\n", price);
    printf("Total Value  : %.2f\n", quantity * price);

    return 0;
}
