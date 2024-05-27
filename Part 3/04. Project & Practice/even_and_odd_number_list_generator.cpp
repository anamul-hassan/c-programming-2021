#include <iostream>
using namespace std;

void evenNumber(int start, int end){
    cout<<"Your even number list."<<endl;
    for(int i = start; start <= end; start++){
        if(start%2 == 0){
            cout<<start;
            if(start<end){
            cout<<", ";
            }
        }
    }
    cout<<endl;
}
void oddNumber(int start, int end){
    cout<<"Your odd number list."<<endl;
    for(int i = start; start <= end; start++){
        if(start%2 == 1){
            cout<<start;
            if(start<end){
               cout<<", ";
            }
        }
    }
}
int main(){
    int start, end;
    cout<<"Enter the staring number."<<endl;
    cin>>start;
    cout<<"Enter the ending number."<<endl;
    cin>>end;

    evenNumber(start,end);
    oddNumber(start,end);

 

return 0;
}