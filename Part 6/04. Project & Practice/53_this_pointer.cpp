#include <iostream>
using namespace std;

class A{
    private:
    int a;
    public:
    // A& setData(int a){ // ---> Another way to initialize object variable value with 'this' pointer.
    void setData(int a){
        this->a = a;
        // return *this;
    }
    void getData(){
        cout<<"The value of a is: "<<a<<endl;
    }
};

int main(){
    /* 'this' is a keyword which is a pointer which points to the
        object which invokes the member function.
    */
    A a;
    // a.setData(5).getData(); // we can set this way to initialize object function.
    a.setData(5);
    a.getData();

    return 0;
}