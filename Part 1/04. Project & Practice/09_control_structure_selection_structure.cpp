#include <iostream>
using namespace std;

int main(){
    char a;
    // Entry
    cout<<"Enter your comment 'yes' for y and 'no' for n."<<endl;
    cin>>a;
    // Condition
    if(a == 'y' || a == 'n'){

    if(a == 'y'){
        cout<<"You say yes."<<endl;
    }
    else if(a =='n'){
        cout<<"You say no."<<endl;
    }
    }
    else{
        cout<<"Your comment invalid"<<endl;
    }

    
    return 0;
}