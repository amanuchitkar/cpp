#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;
    friend complex setNumberSum(complex f1, complex f2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber(void)
    {
        cout << "Your number is" << a << '+' << b << 'i' << endl;
    }
};
complex setNumberSum(complex f1, complex f2)
{
    complex f3;
    f3.setNumber((f1.a + f2.a), (f1.b + f2.b));
    return f3;
}
int main()
{
    complex c1, c2, sum;
    c1.setNumber(8, 8);
    c1.printNumber();

    c2.setNumber(9, 9);
    c2.printNumber();

    sum = setNumberSum(c1, c2);
    sum.printNumber();

    return 0;
}