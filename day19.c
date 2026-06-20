// programe 1

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[10][10], B[10][10], Sum[10][10];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Add matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of the matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// programe 2


#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[10][10], B[10][10], Diff[10][10];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Subtract matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Diff[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("Difference of the matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", Diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// programe 3

#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}

// programe 4

#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    int matrix[10][10];

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find diagonal sum
    for(i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}