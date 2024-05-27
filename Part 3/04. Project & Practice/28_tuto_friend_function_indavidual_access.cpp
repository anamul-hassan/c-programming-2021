#include <iostream>
using namespace std;

class class_two;
class class_one{
    int a;
    friend void exchangeNum(class_one &, class_two&);
    public:
    void setData(int num1){
        cout<<"Enter the first value ";
        cin>>num1;
        a = num1;
    }
    void printData(){
        cout<<"The value of your first enter is: "<<a<<endl;
    }
    void swaptxt(){
        cout<<"Before swaping...."<<endl;
    }
};

class class_two{
    int b;
    friend void exchangeNum(class_one &, class_two &);
    public:
    void setData(int num2){
        cout<<"Enter the second value ";
        cin>>num2;

        b = num2;
    }
    void printData(){
        cout<<"The value of your second enter is: "<<b<<endl;
    }
    void swaptxt(){
        cout<<"After swaping...."<<endl;
    }
};

void exchangeNum(class_one &add1, class_two &add2){
    int temp = add1.a;
    add1.a = add2.b;
    add2.b = temp;
}

int main(){
    int num1, num2;
    class_one class1;
    class_two class2;
    class1.setData(num1);
    class2.setData(num2);
    cout<<endl;
    class1.swaptxt();
    class1.printData();
    class2.printData();
    cout<<endl;
    exchangeNum(class1, class2);
    class2.swaptxt();
    class1.printData();
    class2.printData();


    return 0;
}
