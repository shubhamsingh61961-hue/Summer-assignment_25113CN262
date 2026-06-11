// programe 1

#include <stdio.h>

int main()
{
    int i, j, rows = 5;

    // Loop for each row
    for(i = 1; i <= rows; i++)
    {
        // Print spaces
        for(j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

// programe 2

#include <stdio.h>

int main()
{
    int i, j, rows = 5;

    // Loop for each row
    for(i = rows; i >= 1; i--)
    {
        // Print spaces
        for(j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

// programe 3

#include <stdio.h>

int main()
{
    int i, j, rows = 5;

    for(i = 1; i <= rows; i++)
    {
        // Print spaces
        for(j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        // Print increasing numbers
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        // Print decreasing numbers
        for(j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
// programe 4

#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {

        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print ascending characters
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }

        // Print descending characters
        for (int j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}