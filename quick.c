#include <stdio.h>
int partitions(int arr[], int p, int r)
{
    int x, i, j, temp;
    x = arr[r];
    i = p - 1;
    for (j = p; j < r; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[r];
    arr[r] = temp;

    return i + 1;
}
void quick_sort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q = partitions(arr, p, r);
        quick_sort(arr, p, q - 1);
        quick_sort(arr, q + 1, r);
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void main()
{
    int arr[50], n, i, p, r;
    printf("Enter the range of the array:");
    scanf("%d", &n);
    printf("\nEnter the element of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array before sorting :");
    print(arr,n);
    p=0;
    r=n-1;
    quick_sort(arr,p,r);
    printf("\nThe array after sorting :");
    print(arr,n);
}