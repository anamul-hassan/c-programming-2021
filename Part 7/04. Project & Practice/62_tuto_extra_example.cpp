#include <iostream>
using namespace std;

class Vector
{
public:
    int *array;
    int size;
    Vector(int num1)
    {
        size = num1;
        array = new int[size];
    }
    int dotProduct(Vector &vec)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->array[i] * vec.array[i];
        }
        return d;
    }
};

int main()
{
    Vector obj1(3);
    obj1.array[0] = 4;
    obj1.array[1] = 3;
    obj1.array[2] = 1;

    Vector obj2(3);
    obj2.array[0] = 1;
    obj2.array[1] = 0;
    obj2.array[2] = 1;

    int a = obj1.dotProduct(obj2);
    cout<<a<<endl;

    return 0;
}
