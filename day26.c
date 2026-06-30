// programe 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess;

    // Generate random number between 1 and 100
    srand(time(0));
    number = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");
    printf("Guess a number between 1 and 100\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > number)
            printf("Too High!\n");
        else if (guess < number)
            printf("Too Low!\n");
        else
            printf("Congratulations! You guessed the correct number.\n");

    } while (guess != number);

    return 0;
}

// programe 2

#include <stdio.h>

int main()
{
    int age;

    printf("=== Voting Eligibility System ===\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("You are eligible to vote.\n");
    else
        printf("You are not eligible to vote.\n");

    return 0;
}

//programe 3

#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000, amount;

    printf(" ATM Simulation \n");

    do
    {
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Current Balance = %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Amount Deposited Successfully.\n");
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= balance)
            {
                balance -= amount;
                printf("Please collect your cash.\n");
            }
            else
            {
                printf("Insufficient Balance.\n");
            }
            break;

        case 4:
            printf("Thank You for using ATM.\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}

//programe 4
#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("=== Quiz Application ===\n");

    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 2
    printf("\n2. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 3
    printf("\n3. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    printf("\nYour Score = %d out of 3\n", score);

    return 0;
}