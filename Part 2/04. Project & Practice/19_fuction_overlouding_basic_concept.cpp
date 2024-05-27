#include <iostream>
using namespace std;

// Two function with same name.
// One function.
        int sum(int a, int b){
            cout<<"Using function with 2 arguments.";
            return a + b;
        }

// Another function.
        int sum(int a, int b, int c){
            cout<<"Using function with 3 arguments.";
            return a + b + c;
        }

int main(){
    cout<<"The sum of 3 and 5 is: "<<sum(3,5)<<endl;
    cout<<"The sum of 3, 5 and 7 is: "<<sum(3,5,7)<<endl;
}