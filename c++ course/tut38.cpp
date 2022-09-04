#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}
class Derived : public base
{
public:
    int data3;
    void process();
    void Display();
};
void Derived::process()
{
    data3 = data2 * getdata1();
}
void Derived::Display()
{
    cout << "The value of data1 is" << getdata1() << endl;
    cout << "The value of data2 is" << data2 << endl;
    cout << "The value of data3 is" << data3 << endl;
}
int main()
{
    Derived D1;
    D1.setdata();
    D1.process();
    D1.Display();
    return 0;
}