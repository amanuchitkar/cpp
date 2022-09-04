#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int sumRealnumber(complex, complex);
    int sumcomplexnumber(complex, complex);
};
class complex
{
    int a, b;
    friend class calculator;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printdata(void)
    {
        cout << "The complex number is " << a << " + " << b << " i " << endl;
    }
};
int calculator::sumRealnumber(complex f1, complex f2)
{
    return (f1.a + f2.a);
}
int calculator::sumcomplexnumber(complex f1, complex f2)
{
    return (f1.b + f2.b);
}
int main()
{
    complex c1, c2;
    c1.setdata(6, 9);
    c2.setdata(7, 5);
    c1.printdata();
    c2.printdata();
    cout<<endl;
    calculator cal;
    int res = cal.sumRealnumber(c1, c2);
    cout << "The sum of real part of complex number is " << res << endl;
    int resc = cal.sumcomplexnumber(c1, c2);
    cout << "The sum of complex part of complex number is " << resc << endl;

    return 0;
}
