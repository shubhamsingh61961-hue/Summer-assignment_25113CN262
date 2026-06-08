// programe 1
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

// programe 2
#include <stdio.h>

int main() {
    int rows = 5; // Total lines to print
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line
    }
    
    return 0;
}
// programe 3

#include <stdio.h>

int main() {
    int rows = 5; // Total lines to print
    
    for (int i = 1; i <= rows; i++) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++; // Move to the next letter
        }
        printf("\n"); // Move to the next line
    }
    
    return 0;
}
// programe 4

#include <stdio.h>

int main() {
    int rows = 5; // Total lines to print
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i); // Prints the current row number 'i'
        }
        printf("\n"); // Moves to the next line
    }
    
    return 0;
}
