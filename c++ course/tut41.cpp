#include <iostream>
using namespace std;
class base1
{
protected:
    int base1int;

public:
    void set_data1(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_data2(int b)
    {
        base2int = b;
    }
};
class base3
{
protected:
    int base3int;

public:
    void set_data3(int c)
    {
        base3int = c;
    }
};
// sytax for inheriting in multiple inheritance
// class Derived: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };

class Derived : public base1, public base2,public base3
{
    public:
    void show(void){
        cout<<"The value of base1int is "<<base1int<<endl;
        cout<<"The value of base2int is "<<base2int<<endl;
        cout<<"The value of base3int is "<<base3int<<endl;
        cout<<"The sum  is "<<((base1int+base2int)+base3int)<<endl;
    }
};

int main()
{
    Derived D1;
    D1.set_data1(89);
    D1.set_data2(1);
    D1.set_data3(10);
    D1.show();    
    
    return 0;
}