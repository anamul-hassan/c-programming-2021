#include <iostream>
using namespace std;
/*
TEMPLATE WITH MULTIPLE PARAMETERS:
    Syntax:
        template<class tem1, class tem2>
        class classOne{
            //code or something......
        }
*/
 
// template<class tem1, class tem2> // User Define Parameter.
template<class tem1 = int, class tem2=float> // Default Parameter.
class Class1{
    public:
    tem1 a;
    tem2 b;
    Class1(tem1 x, tem2 y){
        a = x;
        b = y;
    }
    void display(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
    }
};

int main(){
    // User Define Parameter Object.
        // Class1 <char, int> obj1('C', 5);
        // obj1.display();

    // Default Parameter Object.
        Class1<>obj1(5, 6.8);
        obj1.display();



    return 0;
}