#include <stdio.h>
void main()
{
    int temp, arr[50], n, i, start, end;
    printf("Enter the range of the array:");
    scanf("%d", &n);
    printf("\nEnter the element of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array before reversing :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (start = 0, end = n - 1; start < end; start++, end--)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    printf("\nThe array after reversing :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}