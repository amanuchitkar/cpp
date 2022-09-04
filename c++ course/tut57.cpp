#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
   virtual void display() {}
};

class CWH_video : public CWH
{
    float videolenght;

public:
    CWH_video(string s, float r, float VL) : CWH(s, r)
    {
        videolenght = VL;
    }
    void display()
    {
        cout << "This is a amazing video with title " << title << endl;
        cout << "Rating " << rating << " out of 5 stars." << endl;
        cout << "The length of video is " << videolenght <<" minute."<< endl<<endl;

    }
};

class CWH_text : public CWH
{
    float text;

public:
    CWH_text(string s, float r, float t) : CWH(s, r)
    {
        text = t;
    }
    void display()
    {
        cout << "This is a amazing text tutorial with title " << title << endl;
        cout << "Rating text tutorial is " << rating << " out of 5 stars." << endl;
        cout << "The word in text tutorial is " << text <<" words."<< endl
             << endl;
    }
};

int main()
{
    string titile;
    float rating, videolenght, text;

    // for Code With Harry Video
    titile = "C++ VIRTUAL TUTORIAL";
    videolenght = 7.9;
    rating = 4.99;
    CWH_video cppvideo(titile, rating, videolenght);

    // for Code With Harry TEXT
    titile = "C++ TEXT TUTORIAL";
    text = 4559;
    rating = 4.2;
    CWH_text cpptext(titile, rating, text);

    CWH *cpp[2];
    cpp[0] = &cppvideo;
    cpp[1] = &cpptext;

    cpp[0]->display();
    cpp[1]->display();

    return 0;
}