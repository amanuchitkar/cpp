#include <iostream>
using namespace std;
class Code_with_harry
{
protected:
    string title;
    float rating;

public:
    Code_with_harry(string t, float r)
    {
        title = t;
        rating = r;
    }
    virtual void display()=0;
};
class yt_video : public Code_with_harry
{
    float videotime;

public:
    yt_video(string t, float r, float d) : Code_with_harry(t, r)
    {
        videotime = d;
    }
    void display()
    {
        cout << "The title of video is " << title << '.' << endl;
        cout << "Rating " << rating << " out of 5 star." << endl;
        cout << "The length of video is " << videotime << endl<<endl;
    }
};
class text_cwh : public Code_with_harry
{
    float word;

public:
    text_cwh(string t, float r, float w) : Code_with_harry(t, r)
    {
        word = w;
    }
    void display()
    {
        cout << "The title of video is " << title << '.' << endl;
        cout << "Rating " << rating << " out of 5 star." << endl;
        cout << "The word in text tutorial is " << word << endl;
    }
};
int main()
{
    string title;
    float rank,vdl,texword;
    title="How to install vs code in pc";
    rank=3.99;
    vdl=1.5;
    yt_video vs(title,rank,vdl);
    

    title="How to install vs code in pc in text";
    rank=4.8;
    texword=6000;
    text_cwh vsc(title,rank,texword);

    Code_with_harry *vsco[2];
    vsco[0]=&vs;
    vsco[1]=&vsc;

    vsco[0]->display();
    vsco[1]->display();



    return 0;
}