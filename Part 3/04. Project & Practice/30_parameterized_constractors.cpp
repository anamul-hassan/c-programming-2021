#include <iostream>
using namespace std;

class complex{
    private:
    int a;
    int b;
    public:
    complex(int, int);
    void printNumber(){
        cout<<"Your numbers are: "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex::complex(int, int){
    cout<<"Enter your first number ";
    cin>>a;
    cout<<"Enter your second number ";
    cin>>b;
}

int main(){
    int a, b;
    // one way that is called 'implicit call'
    complex object1(a, b);
    object1.printNumber();

    // another way that is called 'explicit call'
    complex object2 = complex(a, b);
    object2.printNumber();

    return 0;
}