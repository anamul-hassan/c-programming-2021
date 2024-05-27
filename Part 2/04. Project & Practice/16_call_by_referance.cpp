#include <iostream>
using namespace std;

// Call by reference using C++ reference variables
// Swap Function
void swapRefvariable (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a, b;
    cout<<"Enter the value of a."<<endl;
    cin>>a;
    cout<<"Enter the value of b."<<endl;
    cin>>b;
    
    cout<<endl;

    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;

    cout<<endl;
    swapRefvariable(a, b);
    cout<<"After Swaping"<<endl;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;

    return 0;
}