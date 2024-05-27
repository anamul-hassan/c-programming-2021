#include <iostream>
using namespace std;

template <class tem1=int, class tem2=float, class tem3=char>
class classOne{
    public:
    tem1 data1;
    tem2 data2;
    tem3 data3;
    classOne(tem1 a, tem2 b, tem3 c){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void Display(){
        cout<<"The value of data1 is: "<<data1<<endl;
        cout<<"The value of data2 is: "<<data2<<endl;
        cout<<"The value of data3 is: "<<data3<<endl;
    }
};

int main(){
    classOne<> object1(5, 34.55, 'D');
    object1.Display();
    cout<<endl;
    classOne<float, int, char> object2(3.4, 5, 'a');
    object2.Display();

    return 0;
}