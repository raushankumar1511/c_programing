#include <iostream>
using namespace std;
int main(){

int a=3;
int b=5;
int c;
c=a|b;
cout<<c<<endl;
cout<<"one's complement"<<~a<<endl;

cout<<"left shift"<<int(a<<1);
return 0;
}