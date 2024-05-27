#include <iostream>
using namespace std;

int main(){
    int rating;
    cout<<"Enter your rating 1 to 5."<<endl;
    cin>>rating;
    switch(rating){
        case 1:
        cout<<"Your rating is 1."<<endl;
        break;
        case 2:
        cout<<"Your rating is 2."<<endl;
        break;
        case 3:
        cout<<"Your rating is 3."<<endl;
        break;
        case 4:
        cout<<"Your rating is 4."<<endl;
        break;
        case 5:
        cout<<"Your rating is 5."<<endl;
        break;
        default:
        cout<<"Your rating is invalid."<<endl;
    }
    cout<<"Done with switch case."<<endl;

    return 0;
}