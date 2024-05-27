#include <iostream>

using namespace std;

union money{
    int rice;
    char car;
    float pound;
    float dollar;
};
int main(){
 union money plate;
 plate.pound = 45;
//  plate.car = 'c';
 cout<<plate.pound<<endl; 
//  cout<<plate.car<<endl; 
    return 0;
}