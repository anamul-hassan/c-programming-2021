#include <iostream>
using namespace std;

class Employee
{ 
    private:
    int employeeID;
    int employeeSalary;
    static int counter;
    public:
    void setData(void){
        cout<<"Enter the employee ID."<<endl;
        cin>>employeeID;
        cout<<"Enter the employee salary."<<endl;
        cin>>employeeSalary;
        counter++;
    }
    void getData(void){
        cout<<"The employee index is: "<<counter<<endl;
        cout<<"The employee ID is: "<<employeeID<<endl;
        cout<<"The employee salary is: "<<employeeSalary<<endl;
    }
};
int Employee::counter;

int main(){

    Employee member[10];

    for(int i = 0; i < 10; i++)
    {
        member[i].setData();
        member[i].getData();
    }
    return 0;
}