#include <iostream>
using namespace std;

typedef union money{
    int rice;
    char car;
    float pound;
    float dollar;
}money;

int main(){
    money plate;

    plate.pound = 34551;

    cout<<"The value of pound is: "<<plate.pound<<endl;

    return 0;
}