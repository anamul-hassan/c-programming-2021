#include <iostream>
using namespace std;

template <class Tem>
class KK{
    public:
    Tem data;
    KK(Tem a){
        data = a;
    }
    void display();
};
template <class Tem>
void KK<Tem>::display(){
    cout<<"The value of a is: "<<data<<endl;
}
void Func(int aa){
    cout<<"The value of aa is: "<<aa<<endl;
}
template <class tem1>
void Func(tem1 bb){
    cout<<"The value of bb is: "<<bb<<endl;
}

int main(){
// KK <int> kk(45);
KK <char> kk('C');
// KK <float> kk(34.6);
cout<<kk.data<<endl;
kk.display();


Func(4); // Exact match takes the highest priority.
Func<int>(4); // Exact match takes the highest priority.
    return 0;
}