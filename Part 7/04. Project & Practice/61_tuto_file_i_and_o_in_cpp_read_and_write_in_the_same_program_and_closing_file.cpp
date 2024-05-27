#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    // Connecting our files with 'dout' stream.
    fstream dout("61_tuto_sample.txt");
    // Creating a name string and filling it with the string by the user.
    string name1;
    cout<<"Enter your name ";
    cin>>name1;
    // Writing a string to the file.
    dout<<name1+" My name is ";
    dout.close();

    // ifstream din("61_tuto_sample.txt");
    // string name2;
    // din>>name2;
    // cout<<"The content of this file is: "<<name2<<endl; 
    return 0;
}