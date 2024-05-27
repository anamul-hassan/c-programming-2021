#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *b = &a;
    int **c = &b;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The address of a is (Method 1): "<<b<<endl;
    cout<<"The address of a is (Method 2): "<<&a<<endl;
    cout<<endl;
    cout<<"The primary value of b is: "<<*c<<endl;
    cout<<"The main value of b is: "<<**c<<endl;
    cout<<"The address of b is (Method 1): "<<c<<endl;
    cout<<"The address of b is (Method 2): "<<&b<<endl;
    cout<<endl;
    cout<<"The pre-primary value of c is: "<<c<<endl;
    cout<<"The primary value of c is:"<<b<<endl;
    cout<<"The main value of c is: "<<*b<<endl;
    cout<<"The address of c is: "<<&c<<endl;
    return 0;
}