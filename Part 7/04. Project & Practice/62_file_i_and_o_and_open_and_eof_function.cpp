#include <iostream>
#include <fstream>
using namespace std;


int main(){
    ofstream write1;
    write1.open("62_tuto_sample.txt");
    write1<<"Good Morning!"<<endl;
    write1<<"Good Afternoon!"<<endl;
    write1<<"Good Evening!"<<endl;
    write1<<"Good Night!"<<endl;
    cout<<"Completed"<<endl;
    write1.close();

    ifstream read1;
    string string1, string2;
    read1.open("62_tuto_sample.txt");
    // read1>>string1; // this function will print a single word.
    // read1>>string1>>string2; // this function will print two word.
    // cout<<string1<<string2<<endl;
    while(read1.eof()==0){
        getline(read1,string1);
        cout<<string1<<endl;
    }
    read1.close();

    
    return 0;
}