// programe 1
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], C[10][10];

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Product of matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// programe 2

#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];
    int symmetric = 1;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric)
        printf("The matrix is Symmetric.\n");
    else
        printf("The matrix is Not Symmetric.\n");

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
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Row-wise sums are:\n");
    for(int i = 0; i < rows; i++) {
        int sum = 0;

        for(int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }

        printf("Sum of Row %d = %d\n", i + 1, sum);
    }

    return 0;
}

// programe 4

#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Column-wise sums are:\n");
    for(int j = 0; j < cols; j++) {
        int sum = 0;

        for(int i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }

        printf("Sum of Column %d = %d\n", j + 1, sum);
    }

    return 0;
}