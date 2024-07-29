#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;

    printf("Enter number of rows and columns for first 2D array:");
    scanf("%d%d", &r1, &c1);

    int a[r1][c1];

    printf("Enter elements for first 2D array:");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("First Matrix is:");
    for (int i = 0; i < r1; i++)
    {
        printf("\n");
        for (int j = 0; j < c1; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }

    printf("\nEnter number of rows and columns for second 2D array:");
    scanf("%d %d", &r2, &c2);

    int b[r2][c2];

    printf("Enter elements for second 2D array:");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Second Matrix is:");
    for (int i = 0; i < r2; i++)
    {
        printf("\n");
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", b[i][j]);
        }
    }

    printf("\nMatrix Addition:");
    for (int i = 0; i < r1; i++)
    {
        printf("\n");
        for (int j = 0; j < c1; j++)
        {
            int sum = a[i][j] + b[i][j];
            printf("%d\t", sum);
        }
    }
    return 0;
}

//i,j dana than hodin balaganna.
//arrays dana than balaganna.