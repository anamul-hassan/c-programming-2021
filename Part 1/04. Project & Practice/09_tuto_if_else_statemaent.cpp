#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age."<<endl;
    cin>>age;
    if(age <= 100){

    if(age < 18){
        cout<<"You can't come to my party"<<endl;
    }
    else if (age == 18){
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else{
        cout<<"You can come to my party"<<endl;
    }
    }
    else{
        cout<<"You are so old so can't come to my party"<<endl;
    }

    return 0;
}