#include <stdio.h>
// void swap(int *x,int *y){
//     int temp=*y;
//     *y=*x;
//     *x=temp;
// }
void change(int *p,int *q){
   int add=*p+*q;
   int sub =*p-*q;
   *p=add;
   *q=sub;
}
int main()
{
    int a=34,b=98;
    // printf("value of a and b before  swapping is %d  %d\n",a,b);
    // swap(&a,&b);
    // printf("value of a and b after  swapping is %d  %d",a,b);
    printf("value of a and b before  add and substract is %d  %d\n",a,b);
    change(&a,&b);
    printf("value of a and b after  add and substract is %d  %d",a,b);
    return 0;
}