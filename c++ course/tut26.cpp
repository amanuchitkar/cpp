#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumComplex(complex f1, complex f2);
    void printNumber(void)
    {
        cout << "You'r number is " << a << '+' << b << 'i' << endl;
    }
};
complex sumComplex(complex f1, complex f2)
{
    complex f3;
    f3.setNumber((f1.a + f2.a), (f1.b + f2.b));
    return f3;
}
int main()
{
    complex c1, c2, sum;
    c1.setNumber(9, 5);
    c1.printNumber();

    c2.setNumber(7, 6);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}