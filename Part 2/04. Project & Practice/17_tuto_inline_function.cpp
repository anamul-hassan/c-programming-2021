#include <iostream>
using namespace std;

// Arithmetic Function with inline function
inline int multiply (int a, int b){
    return a*b;
}
/* When one function is being called multiply time in the 
program it increase the execution time. So, "inline" function
is used to reduce the execution time and increase program 
efficiency */
int main(){
    int a = 5, b = 7;
    cout<<"The multiplication of a and b is: "<<multiply(a,b)<<endl;
    cout<<"The multiplication of a and b is: "<<multiply(a,b)<<endl;
    cout<<"The multiplication of a and b is: "<<multiply(a,b)<<endl;
    cout<<"The multiplication of a and b is: "<<multiply(a,b)<<endl;
    cout<<"The multiplication of a and b is: "<<multiply(a,b)<<endl;
    cout<<"The multiplication of a and b is: "<<multiply(a,b)<<endl;
    cout<<"The multiplication of a and b is: "<<multiply(a,b)<<endl;
    cout<<"The multiplication of a and b is: "<<multiply(a,b)<<endl;
    cout<<"The multiplication of a and b is: "<<multiply(a,b)<<endl;
    cout<<"The multiplication of a and b is: "<<multiply(a,b)<<endl;
    return 0;
}