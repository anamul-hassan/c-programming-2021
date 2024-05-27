#include <iostream>
using namespace std;

class complex{
    int a, b;
    public:
    complex(int x, int y){
        a = x;
        b = y;
    }
    complex(int x){
        a = x;
        b = 50;
    }
    complex(){
        a = 50;
        b = 50;
    }
    void print(){
        cout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    complex c1(4,6);
    c1.print();
    complex c2(6);
    c2.print();
    complex c3;
    c3.print();


}