#include <stdio.h>
int main()
{
    int m, n, p, i, j, k;
    int A[10][10], B[10][10], Mul[10][10];
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &n, &p);
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < p; j++)
            scanf("%d", &B[i][j]);
    for (i = 0; i < m; i++)
        for (j = 0; j < p; j++)
            Mul[i][j] = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < p; j++)
            for (k = 0; k < n; k++)
                Mul[i][j] += A[i][k] * B[k][j];
    printf("Result of Multiplication:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
            printf("%d ", Mul[i][j]);
        printf("\n");
    }
    return 0;
}