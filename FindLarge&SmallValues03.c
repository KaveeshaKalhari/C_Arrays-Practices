// Write a ‘C’ program to store n numbers in an array and find the smallest number and largest number among them.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of values:");
    scanf("%d", &n);

    int a[n];

    printf("Enter values:");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[0] > a[i])
        {
            a[0] = a[i];
        }
    }

    printf("Smallest value: %d\n", a[0]);

    for (int i = 0; i < n; i++)
    {
        if (a[0] < a[i])
        {
            a[0] = a[i];
        }
    }

    printf("Smallest value: %d", a[0]);

return 0;
}