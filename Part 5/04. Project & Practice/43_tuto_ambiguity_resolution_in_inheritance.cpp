#include <iostream>
using namespace std;

class Base1{
    public:
    void greeting(){
        cout<<"Hello, good morning!"<<endl;
    }
};
class Base2{
    public:
    void greeting(){
        cout<<"Hello, good evening!"<<endl;
    }
};
class Base3{
    public:
    void greeting(){
        cout<<"Hello, good night!"<<endl;
    }
};

class Derived: public Base1, public Base2, public Base3{
public:
void greeting(){
    Base1::greeting();
    Base2::greeting();
    Base3::greeting();
    }
};
int main(){
Derived d;
d.greeting();
    return 0;
}