#include <iostream>
using namespace std;
class student
{
protected:
    int rollno;

public:
    void set_rollno(int r1)
    {
        rollno = r1;
    }
    void get_rollno(void)
    {
        cout << "The roll number of student is " << rollno << endl;
    }
};
class exam : public student
{
protected:
    float english_marks;
    float physics_marks;
    float chemistry_marks;
    float maths_marks;
    float cs1_marks;
    float cs2_marks;

public:
    void set_marks(float e, float p, float c, float m, float c1, float c2)
    {
        english_marks = e;
        physics_marks = p;
        chemistry_marks = c;
        maths_marks = m;
        cs1_marks = c1;
        cs2_marks = c2;
    }
    void get_marks(void)
    {
        cout << "The marks obtained in english are " << english_marks << endl;
        cout << "The marks obtained in physics are " << physics_marks << endl;
        cout << "The marks obtained in chemistry are " << chemistry_marks << endl;
        cout << "The marks obtained in maths are " << maths_marks << endl;
        cout << "The marks obtained in computer science1 are " << cs1_marks << endl;
        cout << "The marks obtained in computer science2 are " << cs2_marks << endl;
    }
};
class result:public exam{
    float percentage;
    public:
    void display(void){
        get_rollno();
        get_marks();
        cout<<"You'r percentage in 12th boards are "<<
        (english_marks+physics_marks+chemistry_marks+maths_marks+cs1_marks+cs2_marks)/6<<'%'<<endl<<endl;
    }
};
int main()
{
    result mrudul,ashutosh,latish,nayan;
    mrudul.set_rollno(32);
    mrudul.set_marks(90,90,90,90,90,90);
    mrudul.display();

    ashutosh.set_rollno(47);
    ashutosh.set_marks(60,70,90,90,90,90);
    ashutosh.display();

    latish.set_rollno(58);
    latish.set_marks(58,68,94,94,85,90);
    latish.display(); 

    nayan.set_rollno(78);
    nayan.set_marks(95,70,70,70,99.9,90);
    nayan.display();

    return 0;
}