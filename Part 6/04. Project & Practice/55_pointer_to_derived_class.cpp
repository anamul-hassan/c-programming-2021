#include <iostream>
using namespace std;

class baseClass{
    public:
    int base_variable;
    void display(){
        cout<<"Displaying base class variable 'base_variable' "<<base_variable<<endl;
    }
};

class derivedClass: public baseClass{
    public:
    int derived_variable;
    void display(){
        cout<<"Displaying base class variable 'derived_variable' "<<derived_variable<<endl;
    }
};

int main(){
    baseClass *base_class_pointer;
    baseClass base_object1;
    derivedClass derived_object1;
    base_class_pointer = &derived_object1;
    (*base_class_pointer).base_variable = 377;
    base_class_pointer->display();
    
    derivedClass*derived_class_pointer;
    derived_class_pointer = &derived_object1;
    derived_class_pointer->derived_variable = 344;
    derived_class_pointer->display();



    return 0;
}
