#include <iostream>
#include <fstream>

/*
The useful classes for working with files in c++ are:
    1. fstreambase
    2. ifstream --> derived from fstreambase.
    3. ofstream --> derived from fstreambase.

In order to work with files in c++, you will have to open it.
Primarily, there are two ways to open a file.
    --> using the constractor.
    --> using the member function open() of the class. 
*/
using namespace std;

int main(){
    string string1, string2;
    // string1 = "I wanna love you forever.";
    // // Opening files using constractor and writing it.
    // ofstream out("60_tuto_write_sample.txt");
    // out<<string1;

    ifstream in("60_tuto_read_sample.txt");
    // in>>string2;
    getline(in,string2);
    cout<<string2<<endl;
    getline(in,string2);
    cout<<string2<<endl;
    getline(in,string2);
    cout<<string2<<endl;


    return 0;
}