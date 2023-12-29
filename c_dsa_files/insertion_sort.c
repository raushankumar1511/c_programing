#include <stdio.h>
int main()
{
    int a[] = {8, 9, 5, 7, 3, 2, 4, 1};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    insertion(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
void insertion(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // int max=i;
        int j = i;
        while (j > 0 & arr[j - 1] > arr[j])
        {
            swap(&arr[j - 1], &arr[j]);
            j = j - 1;
        }
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}