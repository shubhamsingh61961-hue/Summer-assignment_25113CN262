
//programe 1

#include <stdio.h>

int main() {
    int n, sum;

    // Ask  input from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Apply the  formula
    sum = n * (n + 1) / 2;

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}

//programe 2

#include <stdio.h>

int main() {
    int num, i;

    // ask input from the user 
    printf("Enter an integer to print its table: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);
    printf("---------------------------\n");

    // Loop for calculate and display the table up to 10
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
//programe 3

#include<stdio.h>
int main()
{
    //variable declaration
      int n,i;
     int fact =1; // initializing fact to 1
printf("Enter the number");
       scanf("%d",&n);// Taking input from the user
//check if the input number is negative then factorial is not exist
      if(n<0)
      {
    
      printf("factorial is not define ");
}
// if number is 0 or 1 then factorial is always 1
else if ((n==0)||(n==1)){
     printf("factorial is 1");
}

    //if the number is greater than 0 or 1 then calculate the factorial
    else{
        //loop runs from 1 to n to multiply all consecutive numbers
    for(i=1;i<=n;i++)
    {
        fact=fact*i;// multiplying the result in fact
    }
//print the final calculated factorial value 
printf("the factorial is =%d",fact);
}
return 0;
}
// programe 4

#include<stdio.h>
int main()
{
   // variable declaration n for input number , count to store number of digit
          int n, count=0;
    printf("enter the number");
    // take input from the user 
    scanf("%d",&n);
    // loop run as long as n is greater than 0
       while (n>0){
        n=n/10;// divide n by 10 in each step to remove the last digit 
        count=count+1;// increment the count by 1 for each removed digit 
     }
     // print the final count of digit on the screen 
     printf("the no of digit are=%d",count);
     return 0;
    }
        
       
       
