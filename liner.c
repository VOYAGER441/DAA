#include <stdio.h>
void main()
{
    int arr[50], n, i, p, key, flag = 0;
    printf("Enter the range of the array:");
    scanf("%d", &n);
    printf("\nEnter the element of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the key to find:");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            p = i;
        }
    }
    if (flag == 1)
    {
        printf("\nThe element %d is found in %d index",key,p);
    }
    else{
        printf("\nThe element %d is not found ",key);
    }
}