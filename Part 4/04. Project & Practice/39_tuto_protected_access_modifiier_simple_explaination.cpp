#include <iostream>
using namespace std;

class Base{
    private:
    int privateData;
    protected:
    int protectedData;
    public:
    int publicData;

};

/*
Protected Access Modifier Notes:

                    Public Derivation   Private Derivation  Protected Derivation
--------------------------------------------------------------------------------
Public Member       Public              Private             Protected
Protected Member    Protected           Private             Protected
Private Member      Not Inherited       Not Inherited       Not Inherited
--------------------------------------------------------------------------------
*/

// class Derived: private Base{
// class Derived: protected Base{
class Derived: public Base{

};

int main(){
    Base b;
    Derived d;
    // cout<<d.privateData<<endl; // --> will never inherited due to being private data.
    // cout<<d.protectedData<<endl; // --> it won't work due to being protected data.
    cout<<d.publicData<<endl; // --> it will work when visibility mode of derived class will be public otherwise it won't work.
}