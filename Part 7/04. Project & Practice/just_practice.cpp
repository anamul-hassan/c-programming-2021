#include <iostream>
using namespace std;

template <class tem>
class Hello
{
public:
    tem data;
    Hello(tem a)
    {
        data = a;
    }
    void display();
};
template <class tem>
void Hello<tem>::display(){
    cout << "The value of data is: " << data << endl;
}

//Function Overlouding Test.

void Function(int aa){
    cout<<"Function without template."<<endl;
    cout<<"The value of aa is: "<<aa<<endl;
}

template <class tem1>
void Function(tem1 bb){
    cout<<"Function with template."<<endl;
    cout<<"The value of bb is: "<<bb<<endl;
}

int
main()
{
    Hello <int> obj1(5);
    obj1.display();
    Hello <float> obj3(33.65);
    obj3.display();
    Hello <char> obj2('C');
    obj2.display();

    Function(5);
    Function<float>(34.6);

    return 0;
}