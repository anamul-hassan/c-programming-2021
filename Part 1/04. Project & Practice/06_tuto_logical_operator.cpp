# include <iostream> 

using namespace std; 

int main(){
    int a = 5, b = 7;

    cout<<"The value of this logical and operator ((a == b) && (a<b)) is: "<<((a==b) && (a < b))<<endl;
    cout<<"The value of this logical or operator ((a == b) || (a<b)) is: "<<((a==b) || (a < b))<<endl;
    cout<<"The value of this logical not operator !(a == b) is: "<<!(a==b)<<endl;
return 0;
}