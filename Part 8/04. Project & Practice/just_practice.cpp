#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main(){
    int array[]= {3, 5, 77, 10, 34, 6, 88};
    // sort(array, array+4); // 
    sort(array, array+7,greater<int>()); // 
    for(int i = 0; i != 7 ; i++){
        cout<<array[i]<<", ";
    }

    return 0;
}