#include <iostream>
#include <iomanip>
using namespace std;

class Student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int num1){
        roll_number = num1;
    }
    void get_roll_number(){
        cout<<"Your class roll number is: "<<roll_number<<endl;
    }
};

class Test: virtual public Student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(int num1, int num2){
        maths = num1;
        physics = num2;
    }
    void get_marks(){
        cout<<"Your test marks is here: "<<endl
            <<"Mathematics: "<<maths<<endl
            <<"Physics: "<<physics<<endl;
    }
};
class Sports: virtual public Student{
    protected:
    float pt_score;
    public:
    void set_pt_score(int num1){
        pt_score = num1;
    }
    void get_pt_score(){
        cout<<"PT score: "<<pt_score<<endl;
    }
};
class Result: public Test, public Sports{
    private:
    float total_marks;
    public:
    void get_total_marks(){
    total_marks = maths+physics+pt_score;
    cout<<"Your total marks is: "<<fixed<<setprecision(2)<<(float)total_marks<<endl;
    }
    void Display(){
        get_roll_number();
        get_marks();
        get_pt_score();
        get_total_marks();
    }
};
int main(){
    Result Ratan;
    Ratan.set_roll_number(345656);
    Ratan.set_marks(77.7, 88.2);
    Ratan.set_pt_score(9);
    Ratan.Display();
    return 0;
}