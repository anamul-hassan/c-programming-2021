#include <iostream>
using namespace std;

// Factorial Function.
int factorial(int number){
    if(number <= 1){
        return 1;
    }
    return number*factorial(number-1);
}

int main(){
    int number;
    cout<<"Enter a number."<<endl;
    cin>>number;

    cout<<"The factorial number of "<<number<<" is "<<factorial(number)<<endl;
    return 0;
}