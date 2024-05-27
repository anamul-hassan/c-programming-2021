#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

class simpleCal{
    protected:
    int number1;
    int number2;
    public:
    void getDatasimple(){
        cout<<"Enter the first number ";
        cin>>number1;
        cout<<"Enter the second number ";
        cin>>number2;
    }
    void simpleCalprocess(){
        cout<<endl;
        cout << "Simple Calculator output" << endl;
        cout<<"Simple Calculator Output."<<endl;
        cout<<"The addition of these numbers is: "<<number1+number2<<endl;
        cout<<"The subtraction of these numbers is: "<<number1-number2<<endl;
        cout<<"The multiplication of these numbers is: "<<number1*number2<<endl;
        cout<<"The division of these numbers is: "<<number1/number2<<endl;
    }
};

class scientificCal{
    protected:
    int number1;
    int number2;
    public:
    void getDatascientific(){
        cout<<"Enter the first number ";
        cin>>number1;
        cout<<"Enter the second number ";
        cin>>number2;
    }
    void scientificCalprocess(){
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

class hybridCal: public simpleCal, public scientificCal{

};

int main(){
    hybridCal class1;
    class1.getDatasimple();
    class1.simpleCalprocess();
    class1.getDatascientific();
    class1.scientificCalprocess();
    return 0;
}