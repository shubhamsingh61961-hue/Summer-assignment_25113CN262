// programe 1

#include <stdio.h>

// Function to find the sum of two numbers
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2, result;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    result = sum(num1, num2);

    // Display result
    printf("Sum = %d", result);

    return 0;
}

// programe 2

#include <stdio.h>

// Function to find the maximum number
int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2, max;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    max = maximum(num1, num2);

    // Display result
    printf("Maximum number = %d\n", max);

    return 0;
}


// programe 3

#include <stdio.h>

// Function to check whether a number is prime
int isPrime(int n)
{
    int i;

    if (n <= 1)
        return 0; // Not prime

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0; // Not prime
    }

    return 1; // Prime
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime Number.\n", num);
    else
        printf("%d is not a Prime Number.\n", num);

    return 0;
}

// programe 4

#include <stdio.h>

// Function to calculate factorial
int factorial(int n)
{
    int i, fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}