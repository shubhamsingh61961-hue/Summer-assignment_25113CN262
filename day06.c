//programe 01

#include <stdio.h>

int main()
{
    int decimal, binary[32];
    int i = 0, j;

    // Input decimal number from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Special case for 0
    if (decimal == 0)
    {
        printf("Binary equivalent = 0");
        return 0;
    }

    // Convert decimal to binary
    while (decimal > 0)
    {
        binary[i] = decimal % 2; // Store remainder (0 or 1)
        decimal = decimal / 2;   // Update decimal number
        i++;
    }

    // Print binary number in reverse order
    printf("Binary equivalent = ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    return 0;
}

//programe 02

// WAP to convert a binary number to a decimal number

#include <stdio.h>
#include <math.h>

int main()
{
    int binary, remainder, decimal = 0, position = 0;

    // Input binary number from user
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Convert binary to decimal
    while (binary != 0)
    {
        remainder = binary % 10;  // Get last digit of binary number

        // Add corresponding decimal value
        decimal = decimal + remainder * pow(2, position);

        binary = binary / 10;     // Remove last digit
        position++;              // Move to next position
    }

    // Display decimal equivalent
    printf("Decimal equivalent = %d\n", decimal);

    return 0;
}

//programe 03 

// WAP to count the number of set bits (1s) in a given number

#include <stdio.h>

int main()
{
    int num, count = 0;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Count set bits
    while (num > 0)
    {
        if (num % 2 == 1)  // Check if the last bit is 1
        {
            count++;
        }

        num = num / 2;     // Remove the last bit
    }

    // Display the result
    printf("Number of set bits = %d\n", count);

    return 0;
}

// programe 4

// WAP to find x raised to the power n without using pow() function

#include <stdio.h>

int main()
{
    int x, n, i, result = 1;

    // Input base and exponent from user
    printf("Enter the value of x (base): ");
    scanf("%d", &x);

    printf("Enter the value of n (exponent): ");
    scanf("%d", &n);

    // Calculate x^n using repeated multiplication
    for (i = 1; i <= n; i++)
    {
        result = result * x;
    }

    // Display the result
    printf("%d raised to the power %d = %d\n", x, n, result);

    return 0;
}
