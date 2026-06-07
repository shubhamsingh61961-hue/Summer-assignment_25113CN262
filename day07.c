//programe 1

#include <stdio.h>

// Function to calculate factorial
int fact(int n)
{
    // Base condition
    if (n == 0)
        return 1;

    // Recursive call
    return n * fact(n - 1);
}

int main()
{
    int num, factorial;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial
    factorial = fact(num);

    // Display result
    printf("Factorial of %d = %d", num, factorial);

    return 0;
}

// programe 2

#include <stdio.h>

// Function to find nth Fibonacci number using recursion
int fibonacci(int n)
{
    if (n == 0)
        return 0;   // Base case

    if (n == 1)
        return 1;   // Base case

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // Print Fibonacci series
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

// programe 3

#include <stdio.h>

// Recursive function to calculate sum of digits
int sumOfDigits(int num)
{
    // Base case: if number becomes 0
    if (num == 0)
    {
        return 0;
    }

    // Add last digit with sum of remaining digits
    return (num % 10) + sumOfDigits(num / 10);
}

int main()
{
    int num, sum;

    // Input a number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call recursive function
    sum = sumOfDigits(num);

    // Display result
    printf("Sum of digits = %d\n", sum);

    return 0;
}

// programe 4

#include <stdio.h>

int reverse = 0;

// Recursive function to reverse the number
int reverseNumber(int num)
{
    // Base case: stop when number becomes 0
    if (num == 0)
    {
        return;
    }

    // Add last digit to the reversed number
    reverse = reverse * 10 + (num % 10);

    // Recursive call with remaining digits
    reverseNumber(num / 10);
}

int main()
{
    int num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call recursive function
    reverseNumber(num);

    // Display reversed number
    printf("Reversed number = %d\n", reverse);

    return 0;
}