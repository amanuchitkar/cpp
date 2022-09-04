#include <iostream>
using namespace std;
class student
{
protected:
    int rollno;

public:
    void setroll(int r)
    {
        rollno = r;
    }
    void getroll()
    {
        cout << "The roll number of student is " << rollno << endl;
    }
};
class exam : virtual public student
{
protected:
    float maths;
    float physics;

public:
    void setex(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void getex()
    {
        cout << "Your marks are: " << endl
             << " #maths " << maths << endl
             << " #physics " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void setsco(int s)
    {
        score = s;
    }
    void getsco(){
        cout<<"You score in sports "<<score<<endl;
    }
};
class result:public exam,public sports{
    float total;
    public:
    void Displayresult(){
        total=maths+physics+score;
        getroll();
        getex();
        getsco();
        cout<<"Your total annual result is "<<total<<endl;
        cout<<"Your this year percentage are "<<total/3<<'%'<<endl;
    }
};
int main()
{
    result mrudul;
    mrudul.setroll(56);
    mrudul.setex(90.5,88.90);
    mrudul.setsco(78);
    mrudul.Displayresult();

    return 0;
}