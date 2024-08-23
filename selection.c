#include <stdio.h>
void main()
{
    int arr[50], n, i, j, temp, min, log;
    printf("Enter the range of the array:");
    scanf("%d", &n);
    printf("\nEnter the element of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array before sorting :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        min = arr[i];
        log = i;
        for (j = i + 1; j < n; j++)
        {
            if (min > arr[j])
            {
                min=arr[j];
                log = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[log];
        arr[log] = temp;
    }
    printf("\nThe array before sorting :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}