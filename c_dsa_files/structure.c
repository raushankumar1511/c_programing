#include <stdio.h>
#include <string.h>
// struct student
// {
//     char name[40];
//     int age;
//     int roll_no;
// };
struct 
{
    char *a;
} a1;

int main()
{
    // struct student s1, s2;
    // struct student s3 = {"shivam", 43, 32};
    // strcpy(s1.name, "raushan sharma");
    // strcpy(s2.name, "rohit sharma");
    // s1.age = 19;
    // s2.age = 17;
    // s1.roll_no = 2;
    // s2.roll_no = 3;
    // printf("%s %d %d ", s3.name, s3.age, s3.roll_no);
    a1.a="fuyfuu";
    printf("%s",a1.a);

    return 0;
}