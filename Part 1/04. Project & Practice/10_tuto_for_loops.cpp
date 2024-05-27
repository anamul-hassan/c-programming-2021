#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int number, limitNum;
    cout<<"Enter the multiplication table number."<<endl;
    cin>>number;
    cout<<"Enter the multiplication table limit number."<<endl;
    cin>>limitNum;
        cout<<endl;
    //For loop syntex.
    for(int i = 0; i < limitNum; i++){
        cout<<number<<"X"<<(i+1)<<"="<<setw(3)<<number*(i+1)<<endl;
    }

    return 0;
}