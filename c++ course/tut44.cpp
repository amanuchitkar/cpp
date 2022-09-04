#include <iostream>
using namespace std;
class student
{
protected:
    int Roll_No;

public:
    void set_roll(int R)
    {
        Roll_No = R;
    }
    void get_roll(void)
    {
        cout << "Your roll number is: " << Roll_No << endl;
    }
};
class test : virtual public student
{
protected:
    float maths;
    float physics;

public:
    void set_makes(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void get_marks(void)
    {
        cout << "Your marks are: " << endl
             << "# Maths:   " << maths << endl
             << "# Physics: " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    int score;

public:
    void set_score(int S){
        score=S;
    }
    void get_score(void){
        cout<<"Your sport score is "<<score<<endl;

    }
};
class Result: public test,public sports{
    private:
    float total;
    public:
    void Display(void){
        total=maths+physics+score;
        get_roll();
        get_marks();
        get_score();
        cout<<"The anual result is "<<total<<endl;
        cout<<"Your percentages are "<<total/3<<endl<<endl;
    }
};

int main()
{
    Result mrudul,ashutosh,aman;
    mrudul.set_roll(55);
    mrudul.set_makes(69.9,99.9);
    mrudul.set_score(80);
    mrudul.Display();

    ashutosh.set_roll(56);
    ashutosh.set_makes(90.8,74.89);
    ashutosh.set_score(10);
    ashutosh.Display();

    aman.set_roll(57);
    aman.set_makes(45.1,35.2);
    aman.set_score(95.7);
    aman.Display();

    

    return 0;
}