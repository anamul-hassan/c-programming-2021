#include <iostream>
#include <list>

using namespace std;

void Print(list<int> &list1){
    list<int>::iterator iterator3;
    for(iterator3 = list1.begin(); iterator3 != list1.end(); iterator3++){
        cout<<*iterator3<<" ";
    }
    cout<<endl;
}

int main(){
    list <int> list1; // List of 0 length.
    list <int> list2(4); // Empty list of size 7.
    list1.push_back(21);
    list1.push_back(5);
    list1.push_back(10);
    list1.push_back(7);

    // list <int>:: iterator iterator1 = list1.begin(); // Iterator will be needed to print in the main function directly.

    // cout<<*iterator1<<" ";
    // *iterator1++;
    // cout<<*iterator1<<" ";
    // *iterator1++;
    // cout<<*iterator1<<" ";
    // *iterator1++;
    // cout<<*iterator1<<" ";
    // *iterator1++;
    // cout<<*iterator1<<" ";
    // *iterator1++;
    cout<<"List1 elements: ";
    Print(list1);

    // Reversing the list-------
        // list1.reverse();
        // cout<<"After reversing: ";
        // Print(list1);

    // Removing element from the list.
        // list1.pop_back();
        // list1.pop_front();
        // list1.remove(5);
    // STLlistPrint(list1);


    list <int>::iterator iterator2 = list2.begin();
    *iterator2 = 12;
    *iterator2++;
    *iterator2 = 46;
    *iterator2++;
    *iterator2 = 4;
    *iterator2++;
    *iterator2 = 10;
    *iterator2++;

//   list2.sort(); 
    cout<<"List2 elements: ";
    Print(list2);
    
    list1.merge(list2);
    cout<<"After marging list1 and list2: ";
    Print(list1);

    cout<<"After sorting list1 and list2 elements: ";
    list1.sort();
    Print(list1);
    return 0;
}