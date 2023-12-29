#include <stdio.h>
int main()
{
    int a[] = {5, 9, 0, 1, 6, 4, 8, 3, 2};
    int n = sizeof(a) / sizeof(a[0]);
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
void quicksort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    // call partion
    int p = partion(arr, s, e);

    // sort left araay
    quicksort(arr, s, p - 1);
    // sort right array
    quicksort(arr, p + 1, e);
}
int partion(int arr[], int s, int e)
{
    int pvoit = arr[s];

    int count = 0;
    for (int i = s; i < e; i++)
    {
        if (arr[i] <= pvoit)
        {
            count++;
        }
    }
    int pvoitindex = s + count;
    swap(&arr[s], &arr[pvoitindex]);
    // put all smaller elements to the left of pvoitindex and larger to the right of pvoitindex
    int i = s, j = e;
    while (i < pvoitindex && j > pvoitindex)
    {
        while (arr[i] < pvoit)
        {
            i++;
        }
        while (arr[j] > pvoit)
        {
            j++;
        }
        if (i < pvoitindex && j > pvoitindex)
        {
            swap(&arr[i], &arr[j]);
            i++, j--;
        }
    }
    return pvoitindex;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}