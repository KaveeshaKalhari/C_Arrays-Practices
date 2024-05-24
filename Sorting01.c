// Write a C program to sort the values of the array of type int in descending order.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of values:");
    scanf("%d", &n);

    int a[n];

    printf("Enter values:");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int num = a[i];
            if (a[i] < a[j])
            {
                a[i] = a[j];
                a[j] = num;
            }
        }
    }

    printf("Decending order:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    //***********************************//

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int num = a[i];
            if (a[i] > a[j])
            {
                a[i] = a[j];
                a[j] = num;
            }
        }
    }

    printf("Assending order:");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}