#include <stdio.h>
void main()
{
    int arr[50], i, j, n, pos, ele;
    printf("Enter the range of the array:");
    scanf("%d", &n);
    printf("\nEnter the element of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array before insertion :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the element for insertion:");
    scanf("%d",&ele);

    printf("\nEnter the position for insertion:");
    scanf("%d",&pos);

    for(i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
    n++;

    printf("\nThe array after insertion :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}