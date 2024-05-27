#include <iostream>
using namespace std;

class point{
    int a, b;
    public:
    point(int, int);
    void print(){
        cout<<"Your numbeer is: "<<a<<", "<<b<<"i"<<endl;
    }
};
point::point(int x, int y){
    a = x;
    b = y;

}
int main(){
    point a(5, 7);
    a.print();
    point b(34, 66);
    b.print();

    return 0;
}