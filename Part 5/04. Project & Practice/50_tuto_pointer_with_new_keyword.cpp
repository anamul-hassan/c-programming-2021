#include <iostream>
using namespace std;

int main(){
    float *ptr1 = new float(49.66);
    int *ptr2 = new int (49);
    cout<<"The value at address (int) ptr is: "<<*ptr1<<endl;
    cout<<"The value at address (int) ptr is: "<<*ptr2<<endl;

    return 0;
}