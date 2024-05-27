#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;
    friend complex setDatabySum(complex obj1, complex obj2);
public:
    void setData(int v1, int v2)
    {
        cout << "Enter your first number: ";
        cin >> v1;
        cout << "Enter your second number: ";
        cin >> v2;
        fflush(stdin);
        a = v1;
        b = v2;
    }
    // void exchangeData (int v1, int v2){
        
    // }
    void getData(int, int)
    {
        cout << "Your first number is: " << a << endl;
        cout << "your second number is: " << b << endl;
    }
    void printNumber(void)
    {
        cout << "Your complex number is: " << a << " + "
             << "i" << b << endl;
    }
};
// Friend Function to access object data.
complex setDatabySum(complex aa, complex bb)
{
   complex cc;
   cc.setData((aa.a + bb.a),(aa.b + bb.b));
    return cc;
}

int main()
{
    int num1, num2;
    complex class1, class2, class3;

    class1.setData(num1, num2);
    class1.getData(num1, num2);
    class2.setData(num1, num2);
    class2.getData(num1, num2);
    class1.printNumber();
    class2.printNumber();

    // calss3.setDatabuSum(class1, class2) --> it won't work because this
    // syntex is used to access direect object function.

    class3 = setDatabySum(class1, class2); // this syntex is used for
    class3.printNumber();                  // accessing frined function.

    return 0;
}