#include <stdio.h>
void main()
{
    int arr[50], i, n;
    printf("Enter the range of the array:");
    scanf("%d", &n);
    printf("\nEnter the element of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int largest1=arr[0];
    int largest2=arr[1];
    if(largest2>largest1)
    {
        int temp=largest2;
        largest2=largest1;
        largest1=temp;
    }

    for ( i = 0; i < n; i++)
    {
        if(largest1<arr[i])
        {
            largest2=largest1;
            largest1=arr[i];
        }
        else if (largest2<arr[i]&&arr[i]!=largest1)
        {
            largest2=arr[i];
        }
        
    }

    printf("\nThe second largest number of this array: %d",largest2);
    
}