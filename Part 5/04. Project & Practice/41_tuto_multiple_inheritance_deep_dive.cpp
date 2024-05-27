#include <iostream>
using namespace std;

class Base1
{
protected:
    int number1;

public:
    void set_number1(int num1)
    {
        number1 = num1;
    }
};
class Base2
{
protected:
    int number2;

public:
    void set_number2(int num2)
    {
        number2 = num2;
    }
};
class Base3{
    protected:
    int number3;
    public:
    void set_number3(int num3){
        number3 = num3;
    }
};
class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of number 1 is: " << number1 << endl;
        cout << "The value of number 2 is: " << number2 << endl;
        cout<<"The value of number 3 is: "<<number3<<endl;
        cout << "The sum of these number is: " << number1 + number2 +number3<< endl;
    }
};

int main()
{
    Derived integer1;
    integer1.set_number1(11);
    integer1.set_number2(12);
    integer1.set_number3(13);
    integer1.show();
    return 0; 
}