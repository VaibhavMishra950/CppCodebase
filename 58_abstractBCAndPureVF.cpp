#include<iostream>
using namespace std;

// Abstract Base Class: A class which is made for just inheriting other classes and you cannot
// create objects out of it is called Abstract Base Class. It "SHOULD" contain at least one
// Pure Virtual Function.


class CWH{  //This is a Abstract Base Class
    protected:
        string title;
        float ratings;
    public:
        CWH(string a, float r) : title(a), ratings(r){}
        virtual void display() = 0;  // do-nothing function --> Pure Virtual Function.
};

class CWHVideo : public CWH{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl) : CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is a video with title "<<title<<endl;
            cout<<"Ratings: "<<ratings<<" out of 5 stars. "<<endl;
            cout<<"Length of the video is: "<<videoLength<<" minutes."<<endl;
        }
};

class CWHText : public CWH{
    int words;
    public:
        CWHText(string s, float r, int w) : CWH(s, r){
            words = w;
        }
        void display(){
            cout<<"This is a text tutorial with title "<<title<<endl;
            cout<<"Ratings: "<<ratings<<" out of 5 stars. "<<endl;
            cout<<"No. of words in this text tutorial is: "<<words<<" words."<<endl;
        }
};


int main(){
    string title;
    float ratings, vlen;
    int words;

    // CWH h1; // This will produce error as CWH is an abstract class.


    // For CWHVideo
    title = "django Tutorial";
    ratings = 4.5;
    vlen = 15.45;
    CWHVideo djVideo(title, ratings, vlen);
    // djVideo.display();

    // For CWHText
    title = "django Tutorial Text";
    ratings = 4.9;
    words = 645;
    CWHText djText(title, ratings, words);
    // djText.display();

    CWH * tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0] -> display();   // These lines will produce errors if 'display()' function is 
    tuts[1] -> display();   // not found in any of these classes.

    return 0;
}