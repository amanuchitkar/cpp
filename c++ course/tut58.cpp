#include <iostream>
using namespace std;
class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()=0;
};
class video : public cwh
{
    float videolenght;

public:
    video(string s, float r, float v) : cwh(s, r)
    {
        videolenght = v;
    }
    void display()
    {
        cout << "The title of this video is " << title << endl;
        cout << "The video time is " << videolenght << " minutes." << endl;
        cout << "Rating of this video get is " << rating << " stars out of 5 stars. "<<endl << endl;
    }
};
class text : public cwh
{
    float words;

public:
    text(string s, float r, float w) : cwh(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "The title of this text tutorial is " << title << endl;
        cout << "The words in this tutorial is " << words << " words." << endl;
        cout << "Rating of text tutorial get is " << rating << " stars out of 5 stars. "<<endl << endl;
    }
};
int main()
{
    string title;
    float rating,vdl,words;

    // video
    title="Hello cpp video";
    vdl=68.90;
    rating=4.9;
    video hcpp(title,rating,vdl);
    
    // text
    title="Hello cpp text";
    words=588;
    rating=3.90;
    text tcpp(title,rating,words);
    // tcpp.display();

    cwh *cpp[2];
    cpp[0]=&hcpp;
    cpp[1]=&tcpp;

    cpp[0]->display();
    cpp[1]->display();
    return 0;
}