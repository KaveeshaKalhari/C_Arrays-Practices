#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int a[n];

    printf("Enter the %d numbers:", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];    
    }
    int avg = sum / n;

    printf("Average of array elements = %d", avg);

    return 0;
}