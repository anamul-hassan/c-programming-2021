#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){


    // // Writing Section.
    //     string string1;
    //     string1 = "Hello, how are you?";
    //     ofstream out("hello.txt");
    //     out<<string1;

    // Writing Section with user input.
        string string2;
        fstream uW("hello.txt");
        cout<<"Enter your text ";
        cin>>string2;
        uW<<"My name is: "<<string2;

    // Reading Section.
        // ifstream in("hello.txt");
        // // in>>string1; // this function read a word in that file.
        // getline(in, string1); // this function read a line in that file.
        // cout<<"The contant of this file is: "<<string1<<endl; // you can use plus or insertion sign.


    return 0;
}