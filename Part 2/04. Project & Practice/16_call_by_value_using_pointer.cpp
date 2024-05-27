#include <iostream>
using namespace std;

// Function Prototype
        int sum (int a, int b){
            int c = a + b;
            return c;
        }
// Call by value using pointer.
// Swap Function
// This function will not interchange a and b because a and b is main value.
        void swap(int a, int b){
            int temp = a;
            a = b;
            b = temp;
        }
// Call by value using pointer.
// Swap function using pointer.
        void swapPointer (int*a, int*b){
            int temp = *a;
            *a = *b;
            *b = temp;
        }

int main(){
    int a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    cout<<endl;

    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;

    cout<<endl;

    cout<<"After Swaping"<<endl;
    swapPointer(&a, &b);
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    return 0;
}