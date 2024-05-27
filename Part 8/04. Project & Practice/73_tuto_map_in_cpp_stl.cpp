#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string, int> marksMap;
    marksMap["Karim"]= 34;
    marksMap["Rahim"]= 50;
    marksMap["Safiq"] = 30;

    // insert new marks
    marksMap.insert({{"Hamid", 35},{"Sarif", 22}});

    map<string, int> ::iterator iterator1;
    for(iterator1 = marksMap.begin(); iterator1 != marksMap.end(); iterator1++){
        cout<<(*iterator1).first<<": "<<(*iterator1).second<<endl;
    }
    // to check the size of marksMap
    cout<<"The size of marksMap: "<<marksMap.size()<<endl;
    cout<<"The maximum size of marksMap: "<<marksMap.max_size()<<endl;
    cout<<"The empty size of marksMap: "<<marksMap.empty()<<endl;

    return 0;
}