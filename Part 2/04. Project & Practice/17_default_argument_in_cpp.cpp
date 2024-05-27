#include <iostream>
using namespace std;
// Function
float moneyReceived(int currentMoney, float factor = 1.04){
    // in that function factor value is a default argument value.
    return currentMoney*factor;
}

int main(){
    int money = 100000;
    cout<<endl;
    cout<<"If you have "<<money<<" tk (bdt) in your bank account, you will receive "<<moneyReceived(money)<<" tk (bdt) after 1 year"<<endl;
    cout<<endl;
    cout<<"For VIP: If you have "<<money<<" tk (bdt) in your bank account, you will receive "<<moneyReceived(money,1.1)<<" tk (bdt) after 1 year."<<endl;
    cout<<endl;

    return 0;
}