#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int *b = &a;
    // Pointer
    cout<<"It will print the address of pointer: "<<b<<endl;
    cout<<"It will print the address of pointer: "<<&a<<endl;

    cout<<"It will print the value of pointer: "<<*b<<endl;
    // Pointer to pointer
    int **c = &b;
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of a is: "<<b<<endl;
    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The address of b is: "<<c<<endl;
    cout<<"The address of c is: "<<&c<<endl;
    cout<<"The value of address b is: "<<*b<<endl;
    cout<<"The value of address c is: "<<*c<<endl;

    return 0;
}