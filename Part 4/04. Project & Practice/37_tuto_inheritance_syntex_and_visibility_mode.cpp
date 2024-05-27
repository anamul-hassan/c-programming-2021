#include <iostream>
using namespace std;

// Base class --->
class Employee
{
private:
    // int Id;
    // float Salary;
public:
    int Id;
    float Salary;
    Employee() {}
    Employee(int num1)
    {
        Id = num1;
        Salary = 4555.5;
    }
};
/*
Derive class syntax:
    class (derived class name) : (visibility mode) (base class mode)
    {
        member/ method/ etcetera ............
    }
Important note about derives class:
    1. Default visibility mode is private.
    2. Public visibility mode: Public member of the base class
        becomes public member of the derived class.
    3. Private visibility mode: Public member of the base class
        becomes private member of the derived class.
    4. Private member of the base class is never inherited.
*/
class Programmer : public Employee
{
public:
    Programmer(int Id1){
        Id = Id1;
    }
    int languageCode = 2;
};

int main()
{
    Employee Rahim(34), Karim(35);
    cout << "Employee Class" << endl;
    cout << "Rahim's ID is: " << Rahim.Id << endl;
    cout << "Rahim's Salary is: " << Rahim.Salary << endl;
    cout << endl;
    cout << "Karim's ID is: " << Karim.Id << endl;
    cout << "Karim's Salary is: " << Karim.Salary << endl;

    Programmer Rafik(23);
    cout << "Programmer Class" << endl;

    cout << "Rafik's Language code is: " << Rafik.languageCode<< endl;
    cout << "Rafik's ID is: " << Rafik.Id << endl;
    cout << "Rafik's Salary is: " << Rafik.Salary << endl;

    return 0;
}