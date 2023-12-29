#include<iostream>
using namespace std;
class rectangle{
    private:
    int length ;
    int breadth;
    public:
    rectangle(int length,int breadth){
        length=length;
        breadth=breadth;
    }
    // rectangle(rectangle &obj){
    //     length=obj.length;
    //     breadth=obj.breadth;
    // }
    int area(){
        return length*breadth;
    }
};
int main(){
    rectangle r1(50,100);
    // rectangle r2(r1);
    cout<<  r1.area();
    //  cout<<  r2.area();



    return 0;
}