#include <iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
    void setData(int num1, int num2){
        real = num1;
        imaginary = num2;
    }
    void getData(){
        cout<<"Your real part is: "<<real<<endl;
        cout<<"Your imaginary part is: "<<imaginary<<endl;
    }
};

int main(){
    complex c1;
    complex *ptr = &c1;
    // (*ptr).setData(4,6); // (*ptr) parantisis must be needed.
    ptr->setData(4,6);      // ptr-> is an another way to initialize
    (*ptr).getData();

    return 0;
}