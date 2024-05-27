#include <iostream>
using namespace std;

int main(){
    cout<<"Print before break statement."<<endl;
    // This loop,at first will print the output than check the condintion.
    for(int i = 0; i < 40; i++){
        cout<<i<<endl;
        if(i == 2){
            break;
        }
    
    }
    cout<<"Print after break statement."<<endl;
    // This loop, at first will check the condition than print.
    for(int i = 0; i < 40; i++){
        if(i == 2){
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}