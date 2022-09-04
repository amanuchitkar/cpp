#include <iostream>
using namespace std;

class student
{
protected:
    int Roll_No;

public:
    void set_rollnumber(int);
    void get_rollnumber(void);
};
void student::set_rollnumber(int R)
{
    Roll_No = R;
}
void student::get_rollnumber(void)
{
    cout << "The Roll number of student is " << Roll_No << endl;
}
class Exam : public student
{
protected:
    float maths_marks;
    float physics_marks;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam::set_marks(float m, float p)
{
    maths_marks = m;
    physics_marks = p;
}
void Exam::get_marks(void)
{
    cout << "The marks obtained in maths are: " << maths_marks << endl;
    cout << "The marks obtained in physics are: " << physics_marks << endl;
}
class Results : public Exam
{
    float percentage;

public:
    void display(void);
};
void Results::display(void)
{
    get_rollnumber();
    get_marks();
    cout << "You'r result percentage is " << (maths_marks + physics_marks) / 2 << '%' << endl
         << endl;
}
int main()
{
    Results mrudul, ashutosh, aman;
    mrudul.set_rollnumber(29);
    mrudul.set_marks(90, 90);
    mrudul.display();

    ashutosh.set_rollnumber(45);
    ashutosh.set_marks(89, 90);
    ashutosh.display();

    aman.set_rollnumber(79);
    aman.set_marks(92, 75);
    aman.display();

    return 0;
}