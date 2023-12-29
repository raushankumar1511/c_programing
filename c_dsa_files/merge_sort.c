#include <stdio.h>
void merge(int arr[], int beg, int mid, int end)
{
    int n1 = mid - beg + 1;
    int n2 = end - mid;
    int la[n1], ra[n2];
    for (int i = 0; i < n1; i++)
    {
        la[i] = arr[beg + i];
    }
    for (int i = 0; i < n2; i++)
    {
        ra[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0;
    int k = beg;
    while ((i < n1) && (j < n2))
    {

        if (la[i] <= ra[j])
        {
            arr[k] = la[i];
            i++;
        }
        else
        {
            arr[k] = ra[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = la[i];
        i++, k++;
    }

    while (j < n2)
    {
        arr[k] = ra[j];
        j++, k++;
    }
}

void mergesort(int arr[], int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergesort(arr, beg, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, beg, mid, end);
    }
}
int main()
{
    int a[] = {8, 7, 4, 3, 9, 6, 1};
    int n = sizeof(a) / sizeof(a[0]);
    printArray(a, n);
    mergesort(a, 0, n - 1);
    printArray(a, n);
    return 0;
}

void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}