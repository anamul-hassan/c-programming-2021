#include <iostream>
using namespace std;

int main(){
    //One way to creat a array for storing integer and float data
    int marks[4]={23, 45, 56, 89};
    //print using for loops
    // for(int i = 0; i < 4; i++){
    //     cout<<marks[i]<<endl;
    // }
    //print using while loops
    // int i = 0;
    // while( i < 4){
    //     cout<<marks[i]<<endl;
    //     i++;
    // }
    // using doWhile loops
    int i = 0;
    do{
        cout<<marks[i]<<endl;
        i++;
    }while(i < 4); 
    //Another way to creat a array for storing integer and float data types
    // cout<<endl;
    // int stuMarks[4];
    // stuMarks[0] = 34;
    // stuMarks[1] = 35;
    // stuMarks[2] = 36;
    // stuMarks[3] = 37;

    // for(int i = 0; i < 4; i++){
    //     cout<<stuMarks[i]<<endl;
    // }

    return 0;
}