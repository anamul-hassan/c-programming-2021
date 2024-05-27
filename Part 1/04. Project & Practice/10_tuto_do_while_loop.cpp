#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int number, limitNum;
    cout<<"Enter the multiplication table number."<<endl;
    cin>>number;
    cout<<"Enter the multiplication limit number."<<endl;
    cin>>limitNum;
    int i = 0;
    do{
        cout<<number<<"X"<<setw(2)<<(i+1)<<"="<<setw(4)<<number*(i+1)<<endl;
        i++;
    }while(i<limitNum);

    return 0;
}