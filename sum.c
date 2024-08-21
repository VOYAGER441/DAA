#include <stdio.h>
int main()
{
    // printf("Hello world");
    // in this program, find the largest and  smallest ,sum and average of the given array
    int arr[50], n, i, j, sum = 0;
    printf("Enter the range of the array:");
    scanf("%d", &n);
    printf("/nEnter the element of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }

    
}