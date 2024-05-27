#include <iostream>
using namespace std;

class baseClass{
    public:
    int base_variable = 10;
    virtual void Display(){ 
        cout<<"Base Class"<<endl;
        cout<<"Displaying base class variable 'base_variable' "<<base_variable<<endl;
    }
};

class derivedClass: public baseClass{
    public:
    int derived_variable = 20;
    void Display(){
        cout<<"Derived Class"<<endl;
        cout<<"Displaying derived class variable 'derived_variable' "<<derived_variable<<endl; 
    }
};

int main(){
    baseClass *basePtr;
    baseClass baseObj;
    derivedClass derivedObj;
    basePtr = &derivedObj;
    basePtr->Display();
    /*
    without virtual function "basePtr->display()"" function will display base class Display.
    */  
    


    return 0;
}