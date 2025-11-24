#include <stdio.h>

int main()
{
    int n, i, j, max_index, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the element%d: ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        max_index = i;

        for (j = i + 1; j < n; j++)
        {
            if (a[j] > a[max_index])
            {
                max_index = j;
            }
        }
        if (max_index != i)
        {
            temp = a[i];
            a[i] = a[max_index];
            a[max_index] = temp;
        }
    }

    printf("The sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}