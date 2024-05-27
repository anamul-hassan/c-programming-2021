#include <iostream>
#include <math.h>
using namespace std;

class classTwo;

class classOne{
    private:
    int x1;
    int y1;
    friend class classTwo;
    public:
    void setData(int num1, int num2){
        cout<<"Enter your first dimensional number."<<endl;
        cout<<"Enter your first number ";
        cin>>num1;
        cout<<"Enter your second number ";
        cin>>num2;
        x1 = num1;
        y1 = num2;
    }
    void getData(){
        cout<<"Your first 2D numbers are: "<<x1<<", "<<y1<<endl;
    }
    int calPoint1(classTwo xx2, classOne xx1);
};

class classTwo{
    private:
    int x2;
    int y2;
    friend class classOne;
    public:
    void setData(int num3, int num4){
        cout<<"Enter your second dimensional number."<<endl;
        cout<<"Enter your first number ";
        cin>>num3;
        cout<<"Enter your second number ";
        cin>>num4;
        x2 = num3;
        y2 = num4;
    }
    void getData(){
        cout<<"Your second 2D numbers are: "<<x2<<", "<<y2<<endl;
    }
    int calPoint2(classTwo yy2, classOne yy1);
    
};

int classOne::calPoint1(classTwo xx2, classOne xx1){
        return ((xx2.x2 - xx1.x1)*(xx2.x2 - xx1.x1));
    }
int classTwo::calPoint2(classTwo yy2, classOne yy1){
        return ((yy2.y2 - yy1.y1)*(yy2.y2 - yy1.y1));
    }



int main(){
    int x2, x1, y2, y1;
    classOne class1;
    classTwo class2;
    class1.setData(x1,y1);
    class2.setData(x2,y2);

    int result1, result2;
    result1 = class1.calPoint1(class2, class1);
    result2 = class2.calPoint2(class2, class1);

    double result3 = result1 + result2;
    double result4;
    result4 = sqrt(result3);
    cout<<endl;
    cout<<"Your Two Dimensional point is: "<<result4<<endl;

    return 0;
}