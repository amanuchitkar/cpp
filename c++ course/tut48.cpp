#include <iostream>
using namespace std;

/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "base1 class constructor called" << endl;
    }
    void Dispaly_B1(void)
    {
        cout << "The value of Data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "base2 class constructor called " << endl;
    }
    void Dispaly_B2(void)
    {
        cout << "The value of Data1 is " << data2 << endl;
    }
};
class Derived : public Base2, public Base1
{
    int deri1, deri2;

public:
    Derived(int a, int b, int c, int d) : Base2(b), Base1(a)
    {
        deri1 = c;
        deri2 = d;
        cout << "Derived class constroctor called " << endl;
    }
    void Display_D(void)
    {
        cout << "The value of derived1 is " << deri1 << endl;
        cout << "The value of derived2 is " << deri2 << endl;
    }
};
int main()
{
    Derived d1(12, 35, 3, 8);
    d1.Dispaly_B1();
    d1.Dispaly_B2();
    d1.Display_D();

    return 0;
}