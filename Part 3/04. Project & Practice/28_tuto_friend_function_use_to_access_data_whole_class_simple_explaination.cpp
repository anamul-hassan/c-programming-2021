#include <iostream>
using namespace std;

class class_two;

class class_one{
    int a;
    friend class class_two;
    public:
    void setData(int num1){
        cout<<"Enter the first value: ";
        cin>>num1;

        a = num1;
    }
    void printValue(){
        cout<<"The value of your first enter: "<<a<<endl;
    }
    void swaptxt(){
        cout<<"Your value of before swaping."<<endl;
    }
};

class class_two{
    int b;
    friend class class_one;
    public:
    void setData(int num2){
        cout<<"Enter the second value ";
        cin>>num2;
        b = num2;
    }
    void printValue(){
        cout<<"The value of your second enter: "<<b<<endl;
    }
    void swaptxt(){
        cout<<"Your value of after swaping."<<endl;
    }
    void exchange(class_one &point1, class_two &point2){
    int temp = point1.a;
    point1.a = point2.b;
    point2.b = temp;
}

};

int main(){
    int num1, num2;
    class_one class1;
    class_two class2, class3;
    class1.setData(num1);
    class2.setData(num2);

    cout<<endl;
    class1.swaptxt();
    class1.printValue();
    class2.printValue();
    cout<<endl;

    class3.exchange(class1, class2);
    class2.swaptxt();
    class1.printValue();
    class2.printValue();


    return 0;
}