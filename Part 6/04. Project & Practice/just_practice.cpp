#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string string1, string2;
    // string1 = "How are you?";
    // ofstream out("question.txt");
    // out<<string1;

ifstream in("question.txt");
// in>>string2;
getline(in,string2);
cout<<string2<<endl;
getline(in,string2);
cout<<string2<<endl;

    return 0;
}