#include <iostream>
using namespace std;

class Complex; // Forward declaration

class Calculator{
    public:
    int sumRealcomplex(Complex, Complex);
    int sumCompcomplex(Complex, Complex);
};

class Complex{
    private:
    int a;
    int b;
    // Individually declarating function as friends.
        // friend int Calculator::sumRealcomplex(Complex, Complex);
        // friend int Calculator::sumCompcomplex(Complex, Complex);

    // Alternative way to declarating whole class as function.
        friend class Calculator;
    
    public:
    void setNumber(int num1, int num2){
        cout<<"Enter the value of num1."<<endl;
        cin>>num1;
        cout<<"Enter the value of num2."<<endl;
        cin>>num2;
        
        a = num1;
        b = num2;
    }
    void printNumber(){
        cout<<"Your complex number is: "<<a<< " + "<<b<<"i"<<endl;
    }
};

int Calculator::sumRealcomplex(Complex object1, Complex object2){
    return (object1.a + object2.a);
}

int Calculator::sumCompcomplex(Complex object1, Complex object2){
    return (object1.b + object2.b);
}

int main(){
    int num1, num2, result1, result2, result3;
    Complex object1, object2;

    object1.setNumber(num1, num2);
    object2.setNumber(num1, num2);

    object1.printNumber();
    object2.printNumber();

    Calculator cal;
    // result1 = cal.sumRealcomplex(object1, object2);
    // result2 = cal.sumCompcomplex(object1, object2);

    // cout<<"The sum of real complex is: "<<result1<<endl;
    // cout<<"The sum of complex in complex is: "<<result2<<endl;


    // Alternative way to print the complex sum

    cout<<"The sum of real complex is: "<<cal.sumRealcomplex(object1,object2)<<endl;
    cout<<"The sum of complex in complex is: "<<cal.sumCompcomplex(object1, object2)<<endl;
    return 0;
}