#include <iostream>
using namespace std;

class complex
{
    private:
        int a;
        int b;
    public:
    void setData(int v1, int v2)
    {
        cout<<"Enter the first value: "<<endl;
        cin>>v1;
        cout<<"Enter the second value: "<<endl;
        cin>>v2;
        a = v1;
        b = v2;
    }
    void getData(int, int){
        cout<<"Your first value is: "<<a<<endl;
        cout<<"Your second value is: "<<b<<endl;
    }
    void setDatabySum(complex obj1, complex obj2){
        a = obj1.a + obj2.a;
        b = obj1.b + obj2.b;
    }
    void printNumber(void){
        cout<<"Your complex number is:      "<<a<<" + "<<"i"<<b<<endl;
    }
    void printComplexsum(void){
        cout<<"Your complex number  sum is: "<<a<<" + "<<"i"<<b<<endl;
    }
};

int main(){
    complex c1, c2, c3;
    int num1, num2;

    c1.setData(num1,num2);
    c1.getData(num1, num2);
    
    c2.setData(num1,num2);
    c2.getData(num1, num2);

    c1.printNumber();
    c2.printNumber();
    
    cout<<"---------------------------------------------"<<endl;
    c3.setDatabySum(c1, c2);
    c3.printComplexsum();
    
    return 0;
}