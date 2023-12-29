#include <stdio.h>
int main()
{
    // int a=23;
    // int *ptr=&a;
    // printf("%d\n",ptr);
    // printf("%p\n",ptr);
    // printf("%d",ptr+1);
    int arr[]={1,2,3,4,5,6};
    int *arrptr=arr;
    // printf("the address of first element of array %d \n",&arr[0]);
    // printf("the address of first element of array %d \n",arr);
    // printf("the address of second element of array %d \n",&arr[1]);   
    // printf("the address of second element of array %d \n",arr+1);
// arrptr++;
    // printf("the value at address of first element of array %d \n",*(&arr[0]));
    // printf("the value at address of first element of array %d \n",*(arr));
    // printf("the value at address of first element of array %d \n",arr[0]);
    // printf("the value at address of second element of array %d \n",*(&arr[1]));
    // printf("the value at address of second element of array %d \n",*(arr+1));
    // printf("the value at address of second element of array %d \n",arr[1]); 
    // printf("the value at address of second element of array %d \n",arrptr+1); 
    // printf("the value at address of second element of array %d \n",*(arrptr+1)); 
    printf("%d\n",arrptr);
    printf("%d\n",*arrptr);
    arrptr++;
    printf("%d\n",arrptr+1);
    printf("%d\n",*(arrptr+3));
    return 0;
}
