#include <iostream>
using namespace std;
class rectangle{
    public:
    int length;
    int breadth;
     
     int area(){
        return length*breadth;
     }
     int perimeter (){
        return 2*(length+breadth);
     }
};
int main(){
    rectangle r1,r2;
    // r1.length=23;
    // r1.breadth=5;
    // cout<<"area of rectangle 1 is : "<<r1.area()<<endl;
    // cout<<"perimeter of rectangle 1 is : "<<r1.perimeter()<<endl;
    
    //pointer to an object
    // rectangle *p=&r1;
    // p->length=20;
    // p->breadth=5;
    // cout<<p->area();

    // object in heap
    rectangle *p =new rectangle;
     p->length=20;
    p->breadth=5;
    cout<<p->area();



}