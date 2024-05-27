#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class classTwo;
class classOne{
    private:
    int x1, y1;
    friend class classTwo;
    public:
    void setData(int num1, int num2){
        cout<<"Enter your first Dimensional number."<<endl;
        cout<<"Enter your first number ";
        cin>>num1;
        cout<<"Enter your second number ";
        cin>>num2;
        x1 = num1;
        y1 = num2;
    }
    void printData(){
        cout<<"Your first 2D numbers are: "<<x1<<", "<<y1<<endl;
    }
    int calPoint1(classTwo xx2, classOne xx1);
};

class classTwo{
    private:
    int x2, y2;
    friend class classOne;
    public:
    void setData(int num3, int num4){
        cout<<"Enter your second Dimensional number."<<endl;
        cout<<"Enter your first number ";
        cin>>num3;
        cout<<"Enter your second number ";
        cin>>num4;
        x2 = num3;
        y2 = num4;
    }
    void printData(){
        cout<<"Your second 2D numbers are: "<<x2<<", "<<y2<<endl;
    }
    int calPoint2(classTwo yy2, classOne yy1);
};

int classOne::calPoint1(classTwo xx2, classOne xx1){
    return ((xx2.x2 - xx1.x1)*(xx2.x2-xx1.x1));
}
int classTwo::calPoint2(classTwo yy2, classOne yy1){
    return ((yy2.y2 - yy1.y1)*(yy2.y2 - yy1.y1));
}

int main(){
    int num1, num2;
    classOne class1;
    classTwo class2;
    class1.setData(num1, num2);
    class2.setData(num1, num2);
    cout<<endl;
    class1.printData();
    class2.printData();

    int result1, result2, result3;
    result1 = class1.calPoint1(class2, class1);
    result2 = class2.calPoint2(class2, class1);
    result3 = result1 + result2;
    double resultFinal = sqrt(result3);

    cout<<endl;
    cout<<"Your 2D point is: "<<fixed<<setprecision(3)<<resultFinal<<endl;
    return 0;
}