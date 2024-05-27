#include <iostream>
#include <string>
using namespace std;

class binary
    {
    private:
            string s;
            void check_binary(void);
    public:
            void read(void);
            void ones_compliment(void);
            void display(void);
    };

    void binary:: read(void)
    {
        cout<<"Enter a binary number."<<endl;
        cin>>s;
    }

    void binary::check_binary(void)
    {
        for(int i = 0; i <s.length(); i++)
        {
            if(s.at(i) != '0' && s.at(i) != '1')
            {
                cout<<"Incorrect binary formet."<<endl;
                exit(0);
            }
        }
    }

    void binary::ones_compliment(void)
    {
        check_binary(); //--> Nesting in another function.                                                                                                                                                                                                                                                                                                                                                                                    
        for(int i = 0; i < s.length(); i++)
        {
            if(s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else
            {
                s.at(i) = '0';
            }
        }
        cout<<endl;
    }

    void binary::display(void){
        cout<<"Displaying your binary files."<<endl;
        for(int i = 0; i < s.length(); i++)
        {
            cout<<s.at(i);
        }
    }

    int main(){
        binary bNumber;
        bNumber.read();
        bNumber.ones_compliment();
        bNumber.display();


        return 0;
    }

