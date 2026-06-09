//programe 1

#include <stdio.h>

int main()
{
    int i, j;// i for row and j for columns

    // Outer loop controls the number of rows
    for(i = 5; i >= 1; i--)
    {
        // Inner loop prints stars in each row
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

// programe 2
#include <stdio.h>

int main()
{
    int i, j;// i for row and j for columns

    // Outer loop controls the rows
    for(i = 5; i >= 1; i--)
    {
        // Inner loop prints numbers from 1 to i
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

// programe 3

#include <stdio.h>

int main()
{
    int i, j;// i for row and j for columns

    // Outer loop controls the rows
    for(i = 1; i <= 5; i++)
    {
        // Inner loop prints the same character i times
        for(j = 1; j <= i; j++)
        {
            printf("%c", 'A' + i - 1);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}

// programe 4

#include <stdio.h>

int main()
{
    int i, j;// i for row and j for columns

    // Outer loop for rows
    for(i = 1; i <= 5; i++)
    {
        // Inner loop for columns
        for(j = 1; j <= 5; j++)
        {
            // Print * on borders, space inside
            if(i == 1 || i == 5 || j == 1 || j == 5)
                printf("*");
            else
                printf(" ");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}


