#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int number, limitNum;
    cout<<"Enter the multiplication table number."<<endl;
    cin>>number;
    cout<<"Enter the multiplication limit number."<<endl;
    cin>>limitNum;
    cout<<endl;

    int i = 0;
    while(i < limitNum){
        cout<<number<<"X"<<(i+1)<<"="<<setw(3)<<number*(i+1)<<endl;
        i++;
    }

    return 0;
}
