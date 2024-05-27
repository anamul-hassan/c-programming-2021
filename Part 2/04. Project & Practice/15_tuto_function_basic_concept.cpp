#include <iostream>
using namespace std;
// Function prototypes
int sum (int a, int b);

int main(){
    int number1, number2;
    // number1 and number2 are actual parameters.
    cout<<"Enter the value of number1."<<endl;
    cin>>number1;
    cout<<"Enter the value of number2."<<endl;
    cin>>number2;

    cout<<"The sum of number 1 and number 2 is: "<<sum(number1, number2)<<endl;

    return 0;
}
// Main function
int sum (int a, int b){
   /* a and b are formal parameters which will take the 
   value of actual parameters number1 and number2*/
    int c = a + b;
    return c;
}