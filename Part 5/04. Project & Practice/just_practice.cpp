#include <iostream>
using namespace std;


class Base1{
    int data1;
    public:
    Base1(int num1){
        data1 = num1;
        cout<<"Base1 is called."<<endl;
    }
    void getData1(){
        cout<<"The value of data1 is: "<<data1<<endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(int num2){
        data2 = num2;
        cout<<"Base2 is called."<<endl;
    }
    void getData2(){
        cout<<"The value of data2 is: "<<data2<<endl;
    }
};
class Derived: public Base1, public Base2{
    private:
    int derived1, derived2;
    public:
    Derived(int num1, int num2, int num3, int num4):Base1(num1),Base2(num2){
        derived1 = num3;
        derived2 = num4;
        cout<<"Derived is called."<<endl;
    }
    void Deriveddis(){
        cout<<"The value of derived1 is: "<<derived1<<endl;
        cout<<"The value of derived2 is: "<<derived2<<endl;
    }
};
int main(){
    Derived class1(23, 45, 6456,6356);
    class1.getData1();
    class1.getData2();
    class1.Deriveddis();

    return 0;
}