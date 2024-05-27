#include <iostream>
#include <vector>
using namespace std;

template <class tem1>
void display(vector<tem1> &vec){
    for(int i = 0; i<vec.size(); i++){
        cout<<vec[i]<<", ";
    }
    cout<<endl;
}

int main(){
    // vector <float> vector1;
    // float element;
    // vector <char> vector1;
    // char element;
    vector <int> vector1;
    int element;
    int size;
    cout<<"Enter the size of your vector: ";
    cin>>size;
    for(int i = 0; i < size; i++){
        cout<<"Enter the element in this vector: ";
        cin>>element;
        vector1.push_back(element);
    }
    display(vector1);

    return 0;
}