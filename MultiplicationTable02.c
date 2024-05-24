//Write a C program to display the multiplication table of series of given numbers entered by the user.

#include <stdio.h>

int main()
{
    int n;

    printf("Input the number of numbers:");
    scanf("%d", &n);

    int a[n];

    printf("\nInput %d numbers:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("Number %d:", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nMultiplication table for %d:\n", a[i]);
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", a[i], j, a[i] * j);
        }
    }
    return 0;
}