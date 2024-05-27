#include <iostream>
using namespace std;

int main(){
     int num1 = 555;
     int &num2 = num1;
     cout<<"The value of num1 is: "<<num1<<endl;
     cout<<"The value of num2 is: "<<num2<<endl;
    return 0;
}