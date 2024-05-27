#include <iostream>
using namespace std;

int main(){
    float decimal = 34.4;
    cout<<"The value of 34.4 is: "<<sizeof(34.4)<<endl; // --> it takes a "double" data type memory.
    cout<<"The value of 34.4F is: "<<sizeof(34.4F)<<endl; // --> it takes a "float" data type memory.
    cout<<"The value of 34.4f is: "<<sizeof(34.4f)<<endl; // --> it takes a "float" data type memory.
    cout<<"The value of 34.4L is: "<<sizeof(34.4L)<<endl;// --> it takes a "long double" data type memory.
    cout<<"The value of 34.4l is: "<<sizeof(34.4l)<<endl;// --> it takes a "long double" data type memory.
    return 0;
}