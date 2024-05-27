#include <iostream>
using namespace std;
template <class Tem>
class vector{
    public:
    Tem *array;
    int size;
    vector(int num){
        size = num;
        array = new Tem[size];
    }
    Tem dotProduct(vector &vec){
        Tem d = 0;
        for(int i = 0; i < size; i++){
            d += this->array[ i] * vec.array[i];
        }
        return d;
    }
};

int main(){
    vector<float> v1(3);
    v1.array[0] = 1.4;
    v1.array[1] = 3.3;
    v1.array[2] = 0.1;

    vector<float> v2(3);
    v2.array[0] = 0.1;
    v2.array[1] = 1.90;
    v2.array[2] = 4.1;

    float a = v1.dotProduct(v2);
    cout<<a<<endl;

    return 0;
}