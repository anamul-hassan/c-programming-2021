#include <iostream>
using namespace std;

class TMS{
    protected:
    string title;
    float rating;
    public:
    TMS(string t, float r){
        title = t;
        rating = r;
    }
     virtual void display() = 0; // do-nothing function --> pure virtual function.
};
class TMSvideo: public TMS{
    private:
    float videoLength;
    public:
    TMSvideo(string t, float r, float vL):TMS(t, r){
        videoLength = vL;
    }
    void display(){
        cout<<"This is an useful video with title "<<"'"<<title<<"'."<<endl;
        cout<<"Rating: "<<rating<<" out of 5 stars."<<endl;
        cout<<"Length of this video is: "<<videoLength<<" minutes."<<endl;
    }
};
class TMSbook: public TMS{
    private:
    int pageNumber;
    public:
    TMSbook(string t, float r, int pN ):TMS(t, r){
        pageNumber = pN;
    }
    void display(){
        cout<<"This is an useful book for learning new skill with title "<<"'"<<title<<"'"<<endl;
        cout<<"Rating: "<<rating<<" out of 5 stars."<<endl;
        cout<<"Page of number of this book is: "<<pageNumber<<endl;
    }
};

int main(){
    string title;
    float rating, videoLength;
    int pageNum;

    // for video
    title = "Keystone habit";
    rating = 4.05;
    videoLength = 10.45;
    TMSvideo videoObj(title, rating, videoLength);

    // for book
    title = "How to build new habit";
    rating = 4.66;
    pageNum = 250;
    TMSbook bookObj(title, rating, pageNum);

    TMS *pointer[2];
    pointer[0] = &videoObj;
    pointer[1] = &bookObj;

    pointer[0]->display();
    pointer[1]->display();


    return 0;
}