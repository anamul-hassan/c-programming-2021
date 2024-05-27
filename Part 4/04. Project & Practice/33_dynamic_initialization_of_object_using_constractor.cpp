#include <iostream>
using namespace std;

class Bank_Deposit
{
private:
    int principal;
    int year;
    float interest_rate;
    float return_value;
    float interest;

public:
    Bank_Deposit() {}
    Bank_Deposit(int p, int y, float ir);
    Bank_Deposit(int p, int y, int iR);
    void print();
};

Bank_Deposit::Bank_Deposit(int p, int y, float ir)
    {
        principal = p;
        year = y;
        interest_rate = ir;
        return_value = principal;
        for (int i = 0; i < y; i++)
        {
            return_value = return_value * (1 + interest_rate);
        }
        interest = return_value - principal ;
    }
Bank_Deposit::Bank_Deposit(int p, int y, int iR)
    {
        principal = p;
        year = y;
        interest_rate = float(iR)/100;
        return_value = principal;
        for (int i = 0; i < y; i++)
        {
            return_value = return_value * (1 + interest_rate);
        }
        interest = return_value - principal ;
    }

void Bank_Deposit::print(){
        cout<<endl;
        cout<<"Your Information"<<endl;
        cout<<"Your total amount of principal is: "<<principal<<" tk (bdt)."<<endl;
        if(year == 1){
        cout<<"Your deposit duration is: "<<year<<" year."<<endl;
        }
        else{
            cout<<"Your deposit duration is: "<<year<<" years."<<endl;
        }
        cout<<"Your per year interest rate is: "<<interest_rate<<" tk (bdt)."<<endl;
        cout<<"Your only interest is: "<<interest<<" tk (bdt)."<<endl;
        cout<<"Your principal with interest: " <<return_value<<" tk (bdt)."<<endl;
        cout<<endl;
    }
int main()
{
Bank_Deposit bd1, bd2, bd3;
int p, y;
float ir;
cout<<"Enter the amount of your principal  ";
cin>>p;
cout<<"Enter the deposit duration  ";
cin>>y;
cout<<"Enter your interest rate (decimal number)  ";
cin>>ir;

bd1 = Bank_Deposit(p, y, ir);
bd1.print();

int iR;
cout<<"Enter the amount of your principal  ";
cin>>p;
cout<<"Enter the deposit duration  ";
cin>>y;
cout<<"Enter your interest rate (percentage)  ";
cin>>iR;

bd2 = Bank_Deposit(p, y, iR);
bd2.print();
    return 0;
}