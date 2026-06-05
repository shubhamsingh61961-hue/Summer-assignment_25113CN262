// programe 01
#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    // taking input from the user 
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the sum of proper divisors
    for(i = 1; i < num; i++)
    {
        // Check if i is a divisor of num
        if(num % i == 0)
        {
            sum += i;
        }
    }

    // Check whether the number is perfect or not
    if(sum == num)
    {
        printf("%d is a Perfect Number.\n", num);
    }
    else
    {
        printf("%d is not a Perfect Number.\n", num);
    }

    return 0;
}

// programe 02
#include <stdio.h>

int main()
{
    int num, temp, digit;
    int sum = 0, fact, i;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for comparison
    temp = num;

    // Find the sum of factorials of digits
    while(temp > 0)
    {
        digit = temp % 10;   // Extract the last digit

        // Calculate factorial of the digit
        fact = 1;
        for(i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;    // Add factorial to sum

        temp = temp / 10;    // Remove the last digit
    }

    // Check whether the number is a Strong Number
    if(sum == num)
    {
        printf("%d is a Strong Number.\n", num);
    }
    else
    {
        printf("%d is not a Strong Number.\n", num);
    }

    return 0;
}

//programe 03

#include <stdio.h>

int main()
{
    int num, i;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print all factors of the number
    printf("Factors of %d are: ", num);

    for(i = 1; i <= num; i++)
    {
        // Check if i is a factor of num
        if(num % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

//programe 04

#include <stdio.h>

int main()
{
    int num, i, largestPrime = 0;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find prime factors of the number
    for(i = 2; i <= num; i++)
    {
        while(num % i == 0)
        {
            largestPrime = i;  // Store the current prime factor
            num = num / i;     // Remove the factor from the number
        }
    }

    // Display the largest prime factor
    printf("Largest Prime Factor = %d\n", largestPrime);

    return 0;
}