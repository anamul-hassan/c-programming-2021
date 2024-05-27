#include <iostream>

using namespace std;
int global = 0;
void sum(){
    int a;
    cout<<global;
}

int main(){
    int global = 10;
    global = 21;
    int integer = 5;
    float decimal = 3.5;
    char character = 'c';
    double largeDecimalnum = 4.66666255;
    bool trueFalse = false;
    cout<<"Here is the integer value: "<<integer;
    cout<<"\nHere is the decimal value: "<<decimal;
    cout<<"\nHere is the character value: "<<character;
    cout<<"\nHere is the large decimal number value: "<<largeDecimalnum;
    cout<<"\nHere is the true / false value: "<<trueFalse;
    cout<<"\nHere is the mainGlobal value: "<<global;
    sum();
    cout<<"\nHere is the functionGlobal value: "<<global;
    cout<<"\nHere is the functionGlobal value: "<<global<<trueFalse;

    return 0;
}