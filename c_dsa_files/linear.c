#include <stdio.h>
int main()
{
    int a[]={34,65,878,3,45,67,98};
    int search = 67;
    int size = sizeof(a)/sizeof(a[0]);
    int result = linear(a,search,size);
    if (result==-1){
         printf("element not found");
    }else{
        printf("element found at %d location",result);
    }
    return 0;
}
int linear(int arr[],int search, int size){
     for (int i = 0; i < size; i++)
     {
        if(arr[i]==search){
            return i;
        }
     }
     return -1;    
}