#include <iostream>
using namespace std;

int main(){
    cout<<"Print the output before checking the condintion"<<endl;
    for(int i = 0; i < 40; i++){
        cout<<i<<endl;
        if(i == 2){
            continue;
        }
    }
    cout<<"Print the output after checking the condintion"<<endl;
    for(int i = 0; i < 40; i++){
        if(i == 2){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}