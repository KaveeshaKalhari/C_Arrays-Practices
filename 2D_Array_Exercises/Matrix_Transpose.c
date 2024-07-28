#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter numbers of 2D array rows and coloumns:");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter elements for 2D array:");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix is:");
    for (int i = 0; i < r; i++)
    {
        printf("\n");
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }

    printf("\nMatrix transpose:");
    for (int i = 0; i < r; i++)
    {
        printf("\n");
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", a[j][i]);
        }
    }
    return 0;
}