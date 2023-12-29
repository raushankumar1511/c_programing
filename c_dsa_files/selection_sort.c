#include <stdio.h>
int main()
{
    int a[]={8,9,5,7,3,2};
    int n= sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    selection(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
void selection(int arr[],int n){
    int min_ind;
    for(int i=0;i<n;i++){
        min_ind=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_ind]>arr[j]){
                min_ind=j;
            }
        }
        swap(&arr[min_ind],&arr[i]);
    }
}
void swap(int* a, int* b){
    int temp = *a;
     *a=*b;
    *b=temp;   
}