#include <iostream>
using namespace std;
// Fibonacci sequence function.

        int fibonacci(int number){
            if(number == 0){
                return 0;
            }
            else if(number <= 2){
                return 1;
            }
            return fibonacci(number - 1) + fibonacci(number -2);
        }
// Alternative Fibonacci sequence function.
        // int fibonacci (int number){
        //     if(number == 0){
        //         return 0;
        //     }
        //     else if(number == 1){
        //         return 1;
        //     }
        //     else{
        //         return fibonacci(number - 1) + fibonacci(number - 2);
        //     }

        // }

int main(){
    int stLimit, enLimit;
    cout<<"Enter your starting limit number."<<endl;
    cin>>stLimit;
    cout<<"Enter your ending limit number."<<endl;
    cin>>enLimit;

    for(int index = stLimit; index <= enLimit; index++){
    cout<<"Fibonacci sequence at position "<<index<<" is: "<<fibonacci(index)<<endl;
    }
    return 0;
}