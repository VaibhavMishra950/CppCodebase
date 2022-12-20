#include<iostream>
using namespace std;

class CWH{
    protected:
        string title;
        float ratings;
    public:
        CWH(string a, float r) : title(a), ratings(r){}
        virtual void display(){} // Lines 63 & 64 will not do anything if we remove 'virtual' 
        // from here because then it will call this display which does nothing.
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

    tuts[0] -> display();
    tuts[1] -> display();



    
    return 0;
}