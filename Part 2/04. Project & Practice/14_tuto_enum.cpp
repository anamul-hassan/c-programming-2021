#include <iostream>

using namespace std;

int main(){
    enum meal{breakfast, lunch, dinner};
    meal m1 = breakfast;
    meal m2 = lunch;
    meal m3 = dinner;

    cout<<"The value of m1 is: "<<m1<<endl;
    cout<<"The value of m2 is: "<<m2<<endl;
    cout<<"The value of m2 is: "<<m3<<endl;
    return 0;
}