#include <stdio.h>
int main()
{
    int a=5;
    int b=6;
    printf(" %d  %d ",a,b);
    swap(&a,&b);
    // int temp =a;
    // a = b;
    // b = temp;
    printf("\n %d  %d ",a,b);
    return 0;
}
void swap(int* a, int* b){
    int temp = *a;
     *a=*b;
    *b=temp;   
}
// void swap (int a,int b){
//      int temp =a;
//     a = b;
//     b = temp;
// }