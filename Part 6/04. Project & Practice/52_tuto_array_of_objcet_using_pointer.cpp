#include <iostream>
using namespace std;

class shopItem{
    private:
    int itemID;
    float price;
    public:
    void setData(int num1, float num2){
        itemID = num1;
        price = num2;
    }
    void getData(){
        cout<<"The ID of this item is: "<<itemID<<endl;
        cout<<"The price of this item is: "<<price<<endl;
    }
};

int main(){
    int size = 4;
    shopItem *ptr = new shopItem[size];
    shopItem *ptrTemp = ptr;
    int id, index;
    float price;

for(index = 0; index < size; index++){
    cout<<"Enter ID and price of this item "<<index+1<<endl;;
    cin>>id>>price;
    ptr->setData(id, price);
    ptr++;
}

for(index = 0; index < size; index++){
    cout<<"Item number is: "<<index+1<<endl;
    ptrTemp->getData();
    ptrTemp++;
}
    return 0;
}