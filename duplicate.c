#include <stdio.h>
void main()
{
    int arr[50], i, j, k, n;
    printf("Enter the range of the array:");
    scanf("%d", &n);
    printf("\nEnter the element of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array before deletions :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k > n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    printf("\nThe array after deletions :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}