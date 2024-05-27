#include <iostream>
using namespace std;

class complex{
    private:
    int a;
    int b;
    public:
    /* Creating a constractor.
            Constractor is a special member function with the same
            name as of the classes. It is used to initialize the
            objects of its class.
            It is automatically invoked whenever an object as
            created.
    */
   complex(void);
   void printNumber(){
       cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
   }
};

complex::complex(void){ //--> Default constractors.

    // a = 10;
    // b = 20;

    // User define data.
    int num1, num2;
    cout<<"Enter your first number ";
    cin>>a;
    cout<<"Enter your second number ";
    cin>>b;
}
int main(){
    complex object1;
    object1.printNumber();

    return 0;
}