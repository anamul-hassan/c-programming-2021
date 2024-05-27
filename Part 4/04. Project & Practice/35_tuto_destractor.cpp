#include <iostream>
using namespace std;

int count = 0; // It's called global variable.

class Number{
    public:
    Number(){
        count++;
        cout<<"This is the time when contractor is called for object number."<<count<<endl;
    }
    ~Number(){
        cout<<"This is the time when destractor is called for object number."<<count<<endl;
        count--;
    }
};

int main(){
    cout<<"We are inside our main function."<<endl;
    cout<<"Creating two more objects n1."<<endl;
    cout<<endl;
    Number n1;
    {
        cout<<"Entering this block."<<endl;
        cout<<"Creating two more object."<<endl;
        Number n2, n3;
        cout<<"Exiting this block."<<endl;
    }
    cout<<endl;
    cout<<"Back to main."<<endl;
    return 0;
}