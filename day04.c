// programe 1

#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the Fibonacci series
    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", first);

        // Calculate the next term
        next = first + second;

        // Update values for the next iteration
        first = second;
        second = next;
    }

    return 0;
}

//programe 2

#include <stdio.h>

int main() {
    int n;
    long long first = 0, second = 1, next; // variable declaration

    // Input the position of the Fibonacci term
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // First Fibonacci term
    if (n == 1) {
        printf("The %dst Fibonacci term is %lld\n", n, first);
        return 0;
    }

    // Second Fibonacci term
    if (n == 2) {
        printf("The %dnd Fibonacci term is %lld\n", n, second);
        return 0;
    }

    // Calculate the nth Fibonacci term
    for (int i = 3; i <= n; i++) {
        next = first + second; // Next term is sum of previous two
        first = second;        // Update first term
        second = next;         // Update second term
    }

    // Display the nth Fibonacci term
    printf("The %dth Fibonacci term is %lld\n", n, second);

    return 0;
}

//programe 3

#include <stdio.h>
#include <math.h>

int main() {
    // variable declaration
    int   result;
    int num, originalNum, remainder, digits = 0;
    

    // Input the number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number for comparison later
    originalNum = num;

    // Count the number of digits in the number
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    // Reset originalNum to the input value
    originalNum = num;

    // Calculate the sum of each digit raised to the power of 'digits'
    while (originalNum != 0) {
        remainder = originalNum % 10;           // Extract last digit
        result += pow(remainder, digits);       // Add digit^digits to result
        originalNum /= 10;                      // Remove last digit
    }

    // Check if the calculated sum equals the original number
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
//programe 4

#include <stdio.h>
#include <math.h>

int main()
{
    int start, end;

    // Input range from user
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("\nArmstrong numbers between %d and %d are:\n", start, end);

    // Loop through all numbers in the range
    for (int num = start; num <= end; num++)
    {
        int originalNum = num;
        int temp = num;
        int digits = 0;
        int sum = 0;

        // Count the number of digits
        while (temp != 0)
        {
            digits++;
            temp /= 10;
        }

        temp = num;

        // Calculate sum of each digit raised to the power of total digits
        while (temp != 0)
        {
            int digit = temp % 10;
            sum += (int)pow(digit, digits);
            temp /= 10;
        }

        // Check if the number is an Armstrong number
        if (sum == originalNum)
        {
            printf("%d ", originalNum);
        }
    }

    return 0;
}