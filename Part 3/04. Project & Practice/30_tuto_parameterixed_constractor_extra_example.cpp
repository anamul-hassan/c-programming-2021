#include <iostream>
using namespace std;

class point{
    private:
    int a;
    int b;
    public:
    point (int, int){
        cout<<"Enter your first number ";
        cin>>a;
        cout<<"Enter your second number ";
        cin>>b;
    }
    void displayNumber(){
        cout<<"Your numbers are "<<"("<<a<<" , "<<b<<")"<<endl;
    }

};

int main(){
    int a, b;
    // Implicit call
    point obj1(a, b);
    obj1.displayNumber();

    // Explicit call
    point obj2 = point(a, b);
    obj2.displayNumber();

    return 0;
}