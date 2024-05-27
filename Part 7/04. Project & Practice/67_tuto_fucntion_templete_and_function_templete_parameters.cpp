#include <iostream>
using namespace std;

// float funcAvg(int a, int b){
//     float Avarage = (a+b)/2.0;
//     return Avarage;
// }

template <class tem1, class tem2>
float Avarage1(tem1 x, tem2 y){
    float avarageResult = (x+y)/2;
    return avarageResult;
}

int main(){
    // float avarage;
    // avarage = funcAvg(9,4);
    // printf("The avarage of these number is: %.2f",avarage);

    float Avarage;
    Avarage = Avarage1(45.1, 33.9);
    printf("The avarage of these value is %.2f",Avarage);

    return 0;
}