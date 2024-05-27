#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //"endl" --> is used for the next line.
    int a = 3, b = 44, c = 455, d = 4555;
    cout<<"Useing 'endl' manipulator precedence."<<endl;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;
    cout<<"The value of d is: "<<d<<endl;
    cout<<endl;
    
    //"setw" --> is used to specify the width of the output
    /* when we will use "setw" manipulator precedence, we will
    have to use new header file which name is <iomanip>*/
    cout<<"Using 'setw' manipulator precedence."<<endl;
    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;
    cout<<"The value of d is: "<<setw(4)<<d<<endl;
    return 0;
}