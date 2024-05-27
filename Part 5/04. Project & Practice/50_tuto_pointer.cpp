#include <iostream>

using namespace std;

int main(){
    int a = 4;
    int *ptr = &a;
    *ptr = 990; // ptr update value........
    cout<<"The address of a is: "<<ptr<<endl;
    cout<<"The value of a is: "<<*ptr<<endl;

    return 0;
}