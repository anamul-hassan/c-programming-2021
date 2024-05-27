#include <iostream>
using namespace std;

// Function with static variable.
void demo(){
   static int count = 0;
    cout<<count<<" ";
    // value is updated and will be carried to next.
    count++;
}

int main(){
    for(int i = 0; i < 5; i++){
        demo();
    }

    return 0;
}