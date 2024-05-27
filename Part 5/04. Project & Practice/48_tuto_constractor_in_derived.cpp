#include <iostream>
using namespace std;

class Base1{
    private:
    int data1;
    public:
    Base1(int num1){
        data1 = num1;
        cout<<"Base1 is called."<<endl;
    }
    void get_base1_data(){
        cout<<"The value of data 1 is: "<<data1<<endl;
    }
};
class Base2{
    private:
    int data2;
    public:
    Base2(int num1){
        data2 = num1;
        cout<<"Base2 is called."<<endl;
    }
    void get_base2_data(){
        cout<<"The value of data 2 is: "<<data2<<endl;
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
    void get_derived_data(){
        cout<<"The value of derived1 is: "<<derived1<<endl;
        cout<<"The value of derived2 is: "<<derived2<<endl;
    }
};

int main(){
    Derived harry(10, 20, 30, 40);
    harry.get_base1_data();
    harry.get_base2_data();
    harry.get_derived_data();


    return 0;
}
