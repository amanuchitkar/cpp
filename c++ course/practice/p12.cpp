#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number() { a = 0; }
    number(int num)
    {
        a = num;
    }
    number(number &obj)
    {
        cout << "copy construcor is:" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The value of object is "<<a << endl;
    }
};
int main()
{
    number N1, N2(90), N3(700), x2;
    N1.display();
    N2.display();
    N3.display();

    number x1(N1);
    x1.display();

    x2=N2;
    x2.display();

    number x3=N3;
    x3.display();

    return 0;
}