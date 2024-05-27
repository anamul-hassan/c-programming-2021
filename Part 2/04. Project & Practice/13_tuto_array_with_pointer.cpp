#include <iostream>
using namespace std;

int main(){
    int marks[5]={33, 55, 66, 68, 11};
    int *pointer = marks;

    for(int i = 0; i < 5; i++){
        cout<<"The value of a marks"<<"["<<i<<"]"<<": "<<*(pointer+i)<<endl;
    }

    return 0;
}