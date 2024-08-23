#include <stdio.h>
void marge(int arr[], int beg, int mid, int end)
{
    int n1, n2, i, j, k;
    n1 = mid - beg + 1;
    n2 = end - mid;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[beg + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = arr[mid + j + 1];
    }
    i = j = 0;
    k = beg;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
    
}

int marge_sort(int arr[], int beg, int end)
{
    if (beg < end)
    {
        int mid = beg + (end - beg) / 2;
        marge_sort(arr, beg, mid);
        marge_sort(arr, mid + 1, end);
        marge(arr, beg, mid, end);
    }
}
int print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void main()
{
    int arr[50], n, i, j, temp;
    printf("Enter the range of the array:");
    scanf("%d", &n);
    printf("\nEnter the element of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array before sorting :");
    print(arr, n);
    int beg = 0;
    int end = n - 1;
    marge_sort(arr, beg, end);
    printf("\nThe array before sorting :");
    print(arr, n);
}