#include <iostream>
using namespace std;

class Base1{
    public:
    void display(){
        cout<<"Hello World"<<endl;
    }
};
class Base2: public Base1{
// --> hide and unhide the display function to see the different output.
    public:
    // void display(){
    //     cout<<"Hello, My beautiful people in the world."<<endl;
    // }
};

int main(){

    Base1 class1;
    class1.display();
    Base2 class2;
    class2.display();



    return 0;
}