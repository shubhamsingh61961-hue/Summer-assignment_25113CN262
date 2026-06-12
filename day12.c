// programe 1

#include <stdio.h>

// Function to check palindrome
int isPalindrome(int n)
{
    int original = n;
    int reverse = 0;
    int digit;

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
        return 1; // Palindrome
    else
        return 0; // Not Palindrome
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a Palindrome Number.\n", num);
    else
        printf("%d is not a Palindrome Number.\n", num);

    return 0;
}

// programe 2

#include <stdio.h>

// Function to check Armstrong number
int isArmstrong(int n)
{
    int original = n;
    int sum = 0, digit;

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if (sum == original)
        return 1; // Armstrong
    else
        return 0; // Not Armstrong
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong Number.\n", num);
    else
        printf("%d is not an Armstrong Number.\n", num);

    return 0;
}

// programe 3

#include <stdio.h>

// Function to generate Fibonacci series
void fibonacci(int n)
{
    int a = 0, b = 1, c, i;

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    fibonacci(n);

    return 0;
}
// programe 4

#include <stdio.h>

// Function to check perfect number
int isPerfect(int n)
{
    int i, sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }

    if(sum == n)
        return 1;   // Perfect Number
    else
        return 0;   // Not Perfect Number
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPerfect(num))
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}