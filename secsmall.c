#include <stdio.h>
void main()
{
    int arr[50], n, i;
    printf("Enter the range of the array:");
    scanf("%d", &n);
    printf("\nEnter the element of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array  :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int small1 = arr[0];
    int small2 = arr[1];
    if (small1 > small2)
    {
        int temp = small1;
        small1 = small2;
        small2 = temp;
    }
    for (i = 0; i < n; i++)
    {
        if (small1 > arr[i])
        {
            small2 = small1;
            small1 = arr[i];
        }
        else if (small2 > arr[i] && arr[i]!= small1)
        {
            /* code */
            small2 = arr[i];
        }
    }
    printf("\nThe second smallest number is: %d",small2);
}