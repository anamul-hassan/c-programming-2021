#include <iostream>
#include <vector>
using namespace std;

template <class Tem1>
void display(vector<Tem1> &vec){
// void display(vector<int> &vec){
    cout<<"Displaying this vector."<<endl;
    for(int i = 0; i<vec.size(); i++){
        // cout<<vec[i]<<" "; // we can use these two method to print the vector value.
        cout<<vec.at(i)<<" "; 
    }
    cout<<endl;
}

int main(){
    // vector <int> vector1;
    // int element, size;

    // cout<<"Enter the size of your vector ";
    // cin>>size;
    // for(int i = 0; i< size; i++){
    //     cout<<"Enter the element of this vector ";
    //     cin>>element;
    //     vector1.push_back(element);
    // }
    
    // vector1.pop_back(); 
    // display(vector1);

    // vector <int> :: iterator iterator1 = vector1.begin();
    // // vector <int> :: iterator iterator1 = vector1.end();
    // // vector1.insert(iterator1, 5, 544);
    // // vector1.insert(iterator1, 544);
    // display(vector1);


    // Ways to creat a vector
    vector <int> vector1; // zero length integer vector.
    vector <char> vector2(4); // 4 elements character vector.
    vector <char> vector3(vector2); // 4 elements character vector from vector 2.
    vector <char> vector4(6, 3); // 6 elements interger vector with 3s.
    // vector2.push_back('7');
    display(vector2);
    cout<<vector4.size()<<endl;



    return 0;
}