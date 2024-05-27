#include <iostream>
using namespace std;

class Shop
{
    private:
        int productID[100];
        int productPrice[100];
        int counter;
    public:
        void counter_initialise(void)
            {
                counter = 0;
            }
        void setData(void);
        void displayData(void);
};

void Shop::setData(void)
{
    cout<<"Enter ID of your product No: "<<counter+1<<endl;
    cin>>productID[counter];
    cout<<"Enter Price of your product No: "<<counter+1<<endl;
    cin>>productPrice[counter];
    counter++;
}

void Shop::displayData(void)
{
    for(int i = 0; i < counter; i++)
    {
    cout<<"The price of ID No: "<<productID[i]<<" is: "<<productPrice[i]<<endl;
    }
}

int main(){
    Shop Storeit;
    Storeit.counter_initialise();
    Storeit.setData();
    Storeit.setData();
    Storeit.setData();
    Storeit.displayData();

    return 0;
}