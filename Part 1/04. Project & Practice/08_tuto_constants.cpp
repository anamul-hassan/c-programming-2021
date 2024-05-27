#include <iostream>
using namespace std;

int main(){
    // this way variable will be changing the value.
    // int a = 45;
    // cout<<"The present value of a is: "<<a<<endl;
    // a = 44;
    // cout<<"The value of a after changing is: "<<a<<endl;
    /* if we don't want to change the value of variable, 
    we will use the "constant" for preventing the value change*/
    const int a = 45;
    cout<<"The present value of a is: "<<a<<endl;
    //a =44; it's not valid due to constants precedence.
    cout<<"The value of a after changing is: "<<a<<endl;

    return 0;
}