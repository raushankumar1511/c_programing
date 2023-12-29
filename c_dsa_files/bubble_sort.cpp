#include <iostream>
using namespace std;
int main()
{
    int a[] = {8, 9, 5, 7, 3, 2};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << endl;
    bubble(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    return 0;
}
void bubble(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < (n - 1 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}