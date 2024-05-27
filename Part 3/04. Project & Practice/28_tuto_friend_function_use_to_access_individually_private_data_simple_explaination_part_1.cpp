#include <iostream>

using namespace std;
class Y;
class X
{
    int num1;

public:
    void setData(int value1)
    {
        cout << "Enter the first value." << endl;
        cin >> value1;
        num1 = value1;
    }
    friend int add(X, Y);
};

class Y{
    int num2;
    public:
    void setData(int value2){
        cout<<"Enter the second value."<<endl;
        cin>>value2;
        num2 = value2;
    }
    friend int add(X, Y);
};

int add (X object1, Y object2){
    return (object1.num1 + object2.num2);
}

int main()
{
    int num1, num2, sum;
    X class1;
    class1.setData(num1);
    Y class2;
    class2.setData(num2);
    sum = add(class1, class2);
    cout<<"The sum of two number is: "<<sum<<endl;

    return 0;
}