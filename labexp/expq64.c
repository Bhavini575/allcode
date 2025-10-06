#include <stdio.h>

int main() 
{
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q, i, j, k;

    printf("Enter the number of rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);

    if (n != p) 
    {
        printf("\nMatrix multiplication not possible!");
        printf("\n(Number of columns of A must be equal to number of rows of B)\n");
        return 0;
    }

    printf("\nEnter elements of Matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Read elements of Matrix B
    printf("\nEnter elements of Matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize resultant matrix C with 0
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            C[i][j] = 0;
        }
    }

    // Matrix Multiplication logic
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            for (k = 0; k < n; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("%4d ", A[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            printf("%4d ", B[i][j]);
        }
        printf("\n");
    }

    // Print Resultant Matrix C
    printf("\nResultant Matrix (A × B):\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            printf("%4d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

