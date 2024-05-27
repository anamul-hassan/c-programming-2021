#include <iostream>
using namespace std;

class QF{
    protected:
    string title;
    float rating;
    public:
    QF(string t, float r){
        title = t;
        rating = r;
    }
    virtual void display(){
        cout<<"This is an error code."<<endl;
    }
};

class QFvideo: public QF{
    private:
    float videoLength;
    public:
    QFvideo(string t, float r,float vL):QF(t, r){
        videoLength = vL;
    }
    void display(){
        cout<<"This is an amazing video with title "<<"'"<<title<<"'"<<endl;
        cout<<"Rating: "<<rating<<" out of 5 stars."<<endl;
        cout<<"Length of this video is: "<<videoLength<<endl;
    }
};
class QFbook: public QF{
    private:
    int pageCount;
    public:
    QFbook(string t, float r, int pC):QF(t, r){
        pageCount = pC;
    }
    void display(){
        cout<<"This is an amazing book with title "<<"'"<<title<<"'"<<endl;
        cout<<"Rating: "<<rating<<" out of 5 stars."<<endl;
        cout<<"Number of page in this book is: "<<pageCount<<endl;
    }
};

int main(){
    string title;
    float rating, videoLength;
    int pageCount;

    // for Quantum Foundation video.
    title = "Wasting time without any reason.";
    rating = 4.67;
    videoLength = 12.45;
    QFvideo qfVobj(title, rating, videoLength);
    // for Quantum Foundation book.
    title = "Build Your Self";
    rating = 4.34;
    pageCount = 355;
    QFbook qfBobj(title, rating, pageCount);

QF *pointer[2];
pointer[0] = &qfVobj;
pointer[1] = &qfBobj;

pointer[0]->display();
cout<<endl;
pointer[1]->display();
cout<<endl;

    return 0;
}