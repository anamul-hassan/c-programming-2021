#include <iostream>
using namespace std;

class complex{
    int data1, data2, data3;
    public:
    complex(int x, int y=40, int z = 30){
        data1 = x;
        data2 = y;
        data3 = z;
    }
    void print();
};
void complex::print(){
    cout<<"Your complex data is: "<<data1<<", "<<data2<<" and "<<data3<<endl;
}

int main(){
    complex c1 (345);
    c1.print();

    return 0;
}