#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    // complex(int y)
    // {
    //     a = 0;
    //     b = y;
    // }
    void printdata(void)
    {
        cout << "The complex number is: " << a << " + " << b << 'i' << endl;
    }
};
int main()
{
    complex c1(5,89), c2(90);
    c1.printdata();
    c2.printdata();
    complex c3;
    c3.printdata();
    complex c4=complex(48,56);
    c4.printdata();

    return 0;
}