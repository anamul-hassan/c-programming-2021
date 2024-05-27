#include <iostream>

using namespace std;

// Structure with typedef
typedef struct employee{
    int code;
    char character;
    float salary;
}employee;

int main(){
    employee karim;
    karim.code = 5435252;
    karim.character = 'c';
    karim.salary = 45325;

    cout<<"Employee code: "<<karim.code<<endl;
    cout<<"Employee character: "<<karim.character<<endl;
    cout<<"Employee salary: "<<karim.salary<<endl;

    return 0;
}