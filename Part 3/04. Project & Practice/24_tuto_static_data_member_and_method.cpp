#include <iostream>
using namespace std;

class Employee{
    private:
        int employeeID;
        static int count;
    public:
        void setData(void)
        {
            cout<<"Enter the employee ID."<<endl;
            cin>>employeeID;
            count++;
        }
        void getData(void)
        {
            cout<<"The ID of this employee is: "<<employeeID<<endl;
            
        }
        void getCount(void)
        {
            cout<<"The employee index number is: "<<count<<endl;
        }
};

int Employee::count;

int main(){
    Employee Haradon, Noresh, Koram;
    
    Haradon.setData();
    Haradon.getCount();
    Haradon.getData();

    Noresh.setData();
    Noresh.getCount();
    Noresh.getData();

    Koram.setData();
    Koram.getCount();
    Koram.getData();

    return 0;
}