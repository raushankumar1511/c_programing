#include <iostream>
using namespace std;
class A{
    int num;

    public:
    explicit  A(int number){
        num=number;
      }

      void display(){
        cout<<"the number is "<<num;
      }
};
int main(){
    A obj(654);
    obj.display();

   return 0; 
}