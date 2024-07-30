#include <stdio.h>

int main()
{
    int r1, c1, r2, c2, i, j;

    printf("Enter rows and columns for first matrix:");
    scanf("%d%d", &r1, &c1);

    int a[r1][c1];

    printf("Enter first matrix:");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("first matrix is:");

    for (int i = 0; i < r1; i++)
    {
        printf("\n");
        for (int j = 0; j < c1; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }

    printf("\nEnter rows and columns for second matrix:");
    scanf("%d%d", &r2, &c2);

    int b[r2][c2];

    printf("Enter second matrix:");

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("second matrix is:");

    for (int i = 0; i < r2; i++)
    {
        printf("\n");
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", b[i][j]);
        }
    }
    printf("Matrix Subtraction:");

    for (int i = 0; i < r1; i++)
    {
        printf("\n");

        for (int j = 0; j < c1; j++)
        {
            printf("%d\t", (b[i][j] - a[i][j]));
        }
    }
}