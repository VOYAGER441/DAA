#include <stdio.h>
void main()
{
    int arr[50], j, i, n, pos, ele;
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
    printf("\nEnter the position for deletions: ");
    scanf("%d", &pos);
    for (i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
        printf("\nThe array after deletions :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}