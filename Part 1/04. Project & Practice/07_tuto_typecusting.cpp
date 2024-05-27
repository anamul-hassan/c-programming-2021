#include <iostream>
using namespace std;

int main(){
    int a = 45;
    float b = 45.46;
    // There are two kinds of way to typecasting float into integer and vise versa.
    cout<<"The value of a (float) is: "<<(float)a<<endl;
    cout<<"The value of a (float) is: "<<float(a)<<endl;

    cout<<"The value of b (int) is: "<<(int)b<<endl;
    cout<<"The value of b (int) is: "<<int(b)<<endl;
    // it is a valid way to typecast float into int and vise versa.
    int c = int(b);
    cout<<"The value of c is: "<<c<<endl;
    cout<<endl;
    // Expression of a and b
    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;
    cout<<"The expression is "<<a +int(b)<<endl;

    return 0;
}