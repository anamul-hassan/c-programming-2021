#include <iostream>
using namespace std;


int main(){
int *array = new int[4];
array[0] = 10;
*(array+1) = 20; // another way to initialize a variable value in array
array[2] = 30;
array[3] = 40;
array[4] = 50;
delete[] array;
cout<<"The value of array [0] is: "<<array[0]<<endl;
cout<<"The value of array [1] is: "<<array[1]<<endl;
cout<<"The value of array [2] is: "<<array[2]<<endl;
cout<<"The value of array [3] is: "<<array[3]<<endl;
cout<<"The value of array [4] is: "<<array[4]<<endl;
    return 0;
}