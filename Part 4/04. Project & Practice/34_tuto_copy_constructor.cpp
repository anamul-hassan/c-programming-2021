#include <iostream>
using namespace std;

class Number{
    private:
    int a;
    public:
    Number(){
        a = 1;
    }
    Number(int num1){
        a = num1;
    }
    Number(Number &object){
        cout<<"Copy constractor called!!"<<endl;
        a = object.a;
    }
    void display(){
        cout<<"The number for this object is: "<<a<<endl;
    }
};

int main(){
    Number x, y, z(45),z2;
    x.display();
    y.display();
    z.display();

    Number z1(y); //--> Copy constractor invoked.
    z1.display(); //--> z1 should exactly resemble x or y or z.            

    z2 = z; // Copy constractor didn't invoked.
    
    Number z3 = z; // --> Copy constractor invoked.
    z3.display();

    

}