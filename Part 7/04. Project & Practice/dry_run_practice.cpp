#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    // Writing Section.
        string string1;
        string1 = "Hello, good morning.";
        ofstream write1("dry_run_sample.txt");
        cout<<"### Writing Section--> Done ###"<<endl;
        write1<<string1;
        write1.close();

    // Writing Section with User input.
        string string2;
        fstream write2("hello.txt");
        cout<<"### Writing Section with User input. ###"<<endl;
        cout<<"Enter your name ";
        cin>>string2;
        write2<<"Your name is: "<<string2<<endl;
        // write2<<"Your name is: "+string2<<endl;
        write2.close();
    
    // Read a single word;
        cout<<"### Read a single word. ###"<<endl;
        string string3;
        ifstream read1("dry_run_sample.txt");
        read1>>string3;
        cout<<string3<<endl;;
        read1.close();
    
    // Read a single line.
        cout<<"### Read a single line. ###"<<endl;
        string string4;
        ifstream read2("dry_run_sample.txt");
        getline(read2, string4);
        cout<<string4<<endl;
        read2.close();

    // Read a whole file
        string string5;
        ifstream read3("lorem_ipsam.txt");
        cout<<"### Read a whole file. ###"<<endl;

        while(read3.eof() == 0){
            getline(read3, string5);
            cout<<string5<<endl;
        }
    
    return 0;
}