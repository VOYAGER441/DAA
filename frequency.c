#include <stdio.h>
void main()
{
    int arr[50], frequency[50], n, i, j, count = 0;
    printf("Enter the range of the array:");
    scanf("%d", &n);
    printf("\nEnter the element of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        frequency[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        if (frequency[i] == 1)
            continue;
        count=1;

        for(j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                frequency[j]=1;
                count++;
            }
            
        }
    printf("\nthe element %d occurs %d time in array ",arr[i],count);
    }
}