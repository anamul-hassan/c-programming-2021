#include <iostream>
using namespace std;

class Test{
private:
int a;
int b;
public:
// Test(int x, int y):a(x), b(y){
// Test(int x, int y):a(x), b(y+a){
// Test(int x, int y):a(x), b(y+x){
// Test(int x, int y):a(x+b), b(y){// --> it won't work
Test(int x, int y){
    a = x;
    b = y;
    cout<<"Initialization executed."<<endl;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
}
};
/*
You can use whatever you want
    class Test{
    private:
    int a;
    int b;
    public:
    Test(int x, int y):a(x), b(y){
        cout<<"Initialization executed."<<endl;
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
    }
    };
OR
    class Test{
    private:
    int a;
    int b;
    public:
    Test(int x, int y){
        a = x;
        b = y;
        cout<<"Initialization executed."<<endl;
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
    }
    };
*/

int main(){
    Test obj(5, 8);

    return 0;
}