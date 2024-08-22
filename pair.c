#include <stdio.h>
void main()
{
    int arr[50], final[50], n, i, j, k=0, sum = 0;
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

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            sum = arr[i] + arr[j];
            final[k++] = sum;
        }
    }
    printf("\n");
    int m = (n * (n - 1)) / 2;
    for (i = 0; i < m; i++)
    {
        /* code */
        printf("%d ", final[i]);
    }
}