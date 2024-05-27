#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

class baseClass
{
protected:
    int number1;
    int number2;
public:
     void inputNum(int input1, int input2)
     {
          cout << "Enter your first number ";
          cin >> input1;
          cout << "Enter your second number ";
          cin >> input2;
         number1 = input1;
         number2 = input2;
     }
};

class simpleCal : public baseClass
{
public:
    void simpleCaldisplay()
    {
        cout<<endl;
        cout << "Simple Calculator output" << endl;
        cout << "Your first number was: " << number1 << endl;
        cout << "Your second number was: " << number2 << endl;
        cout << "The addition of these number is: " << (number1 + number2) << endl;
        cout << "The subtraction of these number is: " << (float)(number1 - number2) << endl;
        cout << "The multiplication of these number is: " << (number1 * number2) << endl;
        cout << "The division of these number is: " << fixed << setprecision(2) << (float)number1 / number2 << endl;
    }
};

class scientificCal : public baseClass
{
public:
void scientificCaldisplay(void){
    cout<<endl;
    cout << "Scientific Calculator output" << endl;
    cout << "The root of " << number1 << " is: " << sqrt(number1) << endl;
    cout << "The root of " << number2 << " is: " << sqrt(number2) << endl;
    cout << "The square of " << number1 << " is: " << (float)pow(number1,2) << endl;
    cout << "The square of " << number2 << " is: " << (float)pow(number2,2) << endl;
    cout << "The cube root of " << number1 << " is: " << (float)cbrt(number1) << endl;
    cout << "The cube root of " << number2 << " is: " << (float)cbrt(number2) << endl;
    cout << "The pi value of " << number1 << " is: " << (float)(number2*3.14159265358979323846) << endl;
    cout << "The pi value of " << number2 << " is: " << (float)(number2*3.14159265358979323846) << endl;
}
};

class hybridCalculator: public baseClass, public simpleCal, public scientificCal{

};


int main()
{
    // baseClass inputData;
    int a, b;
    hybridCalculator object1;
    object1.inputNum();
    object1.simpleCaldisplay();
    object1.scientificCaldisplay();
    

    return 0;
}