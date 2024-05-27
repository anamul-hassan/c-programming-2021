#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main(){
    // Function object is called 'Functor'.
    int array[]= {2, 6, 10, 3, 5, 8};
    sort(array, array+6);
    sort(array, array+6, greater<int>());
    for(int i = 0; i< 6; i++){
        cout<<array[i]<<" ";
    }


    return 0;
}