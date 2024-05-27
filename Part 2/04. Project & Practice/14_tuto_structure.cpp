#include <iostream>
using namespace std;

struct employee{
    int code;
    char character;
    float salary;
};

int main(){
    struct employee karim;
    karim.code = 3404234;
    karim.character = 'c';
    karim.salary = 435625;
    cout<<"The employee name is: "<<karim.character<<endl;
    cout<<"The employee code is: "<<karim.code<<endl;
    cout<<"The employee salary is: "<<karim.salary<<endl;
    return 0;
}