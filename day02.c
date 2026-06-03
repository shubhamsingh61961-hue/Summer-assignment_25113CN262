//programe1


#include <stdio.h>

int main() {
    int num, sum = 0, digit;// vsriable declartion 

    // Take input from the user
         printf("Enter a number: ");
    scanf("%d", &num);

    // Loop until all digits are processed
         while (num != 0) {
     // Extract the last digit
     digit = num % 10;

    // Add the digit to the sum
         sum = sum + digit;

     // Remove the last digit from the number
     num = num / 10;
    }

    // Display the result
        printf("Sum of digits = %d\n", sum);

    return 0; 
}

//programe 2

#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;//variable declaration

    // Input the number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;           // Get last digit
        reverse = reverse * 10 + remainder; // Add digit to reversed number
        num = num / 10;                 // Remove last digit
    }

    // Display reversed number
    printf("Reversed number = %d\n", reverse);

    return 0;
}
// programe 3



#include <stdio.h>

int main()
{
    int num, digit;// variable declaration 
    int product = 1; //intializing the product by 1 

    // Input the number
        printf("Enter a number: ");
    scanf("%d", &num);

    // Find product of digits
         while (num != 0)
         {
        digit = num % 10;      // Extract last digit
            product = product * digit; // Multiply digit with product
           num = num / 10;        // Remove last digit
    }

    // Display result
    printf("Product of digits = %d", product);

    return 0;
}
//programe 4

#include <stdio.h>

int main() {
    int num, originalNum, reverse = 0, digit;

    // Input a number from user
        printf("Enter a number: ");
    scanf("%d", &num);

    // Store original number for comparison
        originalNum = num;

    // Reverse the number
         while (num != 0) {
                 digit = num % 10;           // Get last digit
        reverse = reverse * 10 + digit; // Build reversed number
        num = num / 10;             // Remove last digit
    }

    // Check palindrome
        if (originalNum == reverse)  
        printf("%d is a Palindrome Number.\n", originalNum);
      else
        printf("%d is Not a Palindrome Number.\n", originalNum);

    return 0;
}    



 