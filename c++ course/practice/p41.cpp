#include <iostream>
using namespace std;
class base1
{
protected:
    int base1int;

public:
    void setdata1(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void setdata2(int b)
    {
        base2int = b;
    }
};
class base3
{
protected:
    int base3int;

public:
    void setdata3(int c)
    {
        base3int = c;
    }
};
class derived : public base1, public base2, public base3
{
public:
    void display()
    {
        cout << "The value of base1 is " << base1int << endl;
        cout << "The value of base2 is " << base2int << endl;
        cout << "The value of base3 is " << base3int << endl;
        cout << "sum of all is " << base1int + base2int + base3int << endl;
    }
};
int main()
{ 
    derived d2;
   derived *d1;
   d1=&d2;
   d1->setdata1(8);
   d1->setdata2(8);
   d1->setdata3(8);
   d1->display();
   

    return 0;
}