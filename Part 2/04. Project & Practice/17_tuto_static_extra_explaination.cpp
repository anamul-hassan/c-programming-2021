#include <iostream>
using namespace std;

int product (int a, int b){
    // Not recommended to use below lines with inline functions.
   static int count = 0; // ---> This executes only once.
    count = count +1; // --> Next time the function is run and the value of c will be retained.
    return a*b+count;
}

int main(){
    int a, b;
    cout<<"Enter the value of a."<<endl;
    cin>>a;
    cout<<"Enter the value of b."<<endl;
    cin>>b;

    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
}