#include <stdio.h>
int main()
{
    // printf("Hello world");
    // in this program, find the largest and  smallest ,sum and average of the given array
    int arr[50], n, i, j, sum = 0;
    float avg;
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
    }

    int large = arr[0];
    int small = arr[0];

    // use only one for loop O(n)
    for (i = 0; i < n; i++)
    {
        if (large < arr[i])
        {
            large = arr[i];
        }
        else if (small > arr[i])
        {
            small =arr[i];
        }
        sum=sum+arr[i];
    }

    avg=sum/n;

    printf("\nThe largest number is: %d",large);
    printf("\nThe small number is: %d",small);
    printf("\nThe Total sum of given number is: %d",sum);
    printf("\nThe average number is: %.2f",avg);


    return 0;
}