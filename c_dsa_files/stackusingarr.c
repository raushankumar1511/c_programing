#include <stdio.h>
int main()
{
    int arr[100] = {8, 6, 4};
    int size = 100;
     int top = sizeof(arr) / sizeof(arr[0]);
    int number;
    printf("enter the number to push");
    scanf("%d", &number);
    push(arr,size,number);
    printArray(arr,top);
}
void push(int arr[],int size,int ele){
    int top = sizeof(arr) / sizeof(arr[0]);
     if (top == size)
    {
        printf("stack overflow");
    }
    else
    {
        top++;

        arr[top] = ele;
    }
}
void printArray(int a[], int n)
{
    int i;
    for (int i = 0; i <= n; i++)
        printf("%d ", a[i]);
    printf("\n");
}