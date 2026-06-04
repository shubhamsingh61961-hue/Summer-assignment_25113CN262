// programe 1

#include <stdio.h>
int main() {
 int num, i;//variable declaration
 int isPrime = 1;//intiallize prime by 1
 // Input a number from the user
    printf("Enter a number: ");
         scanf("%d", &num);
  // 0 and 1 are not prime numbers
        if (num <= 1) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 to num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Number is not prime
                break;  

               }
          }
      }
 // Display result
         if (isPrime)
        printf("%d is a Prime Number.\n", num);
        else
        printf("%d is not a Prime Number.\n", num);

        return 0;
}
//programe 2

#include <stdio.h>
int main() {
    int start, end, i, j, isPrime;
    // Input range from user
         printf("Enter starting number: ");
        scanf("%d", &start);
            printf("Enter ending number: ");
      scanf("%d", &end);
         printf("Prime numbers between %d and %d are:\n", start, end);
        // Loop through all numbers in the range
    for (i = start; i <= end; i++) {
        // Prime numbers are greater than 1
        if (i <= 1)
            continue;
          isPrime = 1;  // Assume number is prime 
       // Check if i is divisible by any number from 2 to i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not prime
                break;
            } 
        }
             // Print the number if it is prime
        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}
// programe 3

#include <stdio.h>
    int main() {
    int num1, num2, gcd, i;
// Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
// Find the smaller number
    int min = (num1 < num2) ? num1 : num2;
// Loop to find GCD
    for(i = 1; i <= min; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            gcd = i;   // Store the common divisor
        }
    }
// Display the GCD
    printf("GCD of %d and %d = %d\n", num1, num2, gcd);

    return 0;
}
//programe 4

#include <stdio.h>
int main() {
    int num1, num2, max, lcm;
// Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

 // Find the greater number
    max = (num1 > num2) ? num1 : num2;

// Check multiples until LCM is found
       while (1) {
  if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
         }
        max++;
      }
 // Display the LCM
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);
 return 0;
}
