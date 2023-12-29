#include <stdio.h>
int main()
{
    // int a = 4;
    // int *ptr;
    // ptr = &a;
    // printf("%d", ptr);
    // printf("\n%d", *ptr);

    // int a=10;
    // int *p1,*p2;
    // p1=&a;
    // p2=p1;
    // printf("%d %d",*p1,*p2);

    int a []={5,77,5,4};
    int *p1=&a;


   p1++;
    printf("%d\n", *p1);
    printf("%d\n", a);
    

    return 0;
}