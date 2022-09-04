#include <iostream>
using namespace std;
class Y; 
class X
{
    int data;

public:
    void setdata(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};
class Y
{
    int num;

public:
    void setnum(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};
void add(X f1, Y f2)
{
    cout << "summing of the number is: " << f1.data+ f2.num << endl;
}
int main()
{
X a;
a.setdata(9);
Y b;
b.setnum(1756);
add(a,b);
    return 0;
}
