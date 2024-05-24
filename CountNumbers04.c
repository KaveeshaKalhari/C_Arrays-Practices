//Write a C program to input the ages of ‘10’ students and count the number of students who has the age in between 17-19.

#include <stdio.h>

int main()
{
    int a[10];
    int count = 0;

    printf("Input the ages of 10 students:");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i] > 17 && a[i] < 19)
        {
            count++;
        }
    }
    printf("number of students who has the age in between 17-19:%d", count);
    return 0;
}