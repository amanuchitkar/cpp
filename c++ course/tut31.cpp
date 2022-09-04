#include <iostream>
using namespace std;
class complex
{
    int x, y;

public:
    complex()
    {
        x = 0;
        y = 0;
    }
    complex(int a, int b)
    {
        x = a;
        y = b;
    }
    complex(int a)
    {
        x = a;
        y = 0;
    }
    void printdata(void)
    {
        cout << "The complex number is: " << x << " + " << y << "i" << endl;
    }
};
int main()
{
    complex c1(4, 6);
    c1.printdata();

    complex c2(7);
    c2.printdata();

    complex c3;
    c3.printdata();
    return 0;
}