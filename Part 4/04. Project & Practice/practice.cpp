#include <iostream>
#include <iomanip>
using namespace std;

class Student // --> Base class
{  
protected:
    int student_roll_number;

public:
    void set_student_roll_number(int);
    void get_student_roll_number(void);
};
void Student::set_student_roll_number(int rollNum)
{
    student_roll_number = rollNum;
}
void Student::get_student_roll_number(void)
{
    cout << "Your roll number is: " << student_roll_number << endl;
}

class Exam : public Student // --> First derives class
{ 
protected:
    float mathMarks;
    float englishMarks;
    float bengaliMarks;
public:
    void set_subject_marks(float, float, float);
    void get_subject_marks();
};
void Exam::set_subject_marks(float num1, float num2, float num3)
{
    mathMarks = num1;
    englishMarks = num2;
    bengaliMarks = num3;
}
void Exam::get_subject_marks(void)
{
    cout << "The marks obtained in Bengali is: " << bengaliMarks << endl;
    cout << "The marks obtained in English is: " << englishMarks << endl;
    cout << "The marks obtained in Math is: " << mathMarks << endl;
}

class Result : public Exam // Second derived class
{ 
public:
    void Display();
};

void Result::Display(void)
{
    get_student_roll_number();
    get_subject_marks();
    cout << "Your total marks is: " <<fixed<<setprecision(2)<<(float)(bengaliMarks+mathMarks+englishMarks) << endl;
    cout << "Your percentage is: " <<fixed<<setprecision(2)<<(float)(bengaliMarks+mathMarks+englishMarks)/3<< endl;
}
int main()
{
    Result student1;
    student1.set_student_roll_number(101);
    student1.set_subject_marks(51.0, 59.0, 53.0);
    student1.Display();

    return 0;
}