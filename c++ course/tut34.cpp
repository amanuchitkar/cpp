#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number() { a = 0; }

    Number(int num)
    {
        a = num;
    }

    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "The copy constructor is " << endl;
        a = obj.a;
    }

    void Display()
    {
        cout << "The value of object is " << a << endl;
    }
};

int main()
{
    Number x(60), y, z(45), z2;

    x.Display();
    y.Display();
    z.Display();

    // z1 should exactly resemble z  or x or y

    Number z1(x); // copy constructor invoked
    z1.Display();

    z2 = z; // copy constructor not called
    z2.Display();

    Number z3 = z; // copy constructor invoked
    z3.Display();

    return 0;
}