#include <stdio.h>
int main(){
    printf("learn pointer\n");
    int a=34;
    int *ptra= &a;
    printf("the address of a is %p\n",ptra);
    printf("the value of a is %d\n",*ptra);
     printf("the address of  pointer to a is %p",&ptra);
    // int* a;
    // *a=44;
    // printf("%d",*a);
    return 0;
}