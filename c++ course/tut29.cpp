#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created

    complex(void); // Constructor declaration
    void printdata(void)
    {
        cout << "The complex number is " << a << " + " << b << " i" << endl;
    }
};
complex::complex(void) // ----> This is a default constructor as it takes no parameters
{
    a = 10;
    b = 90;
}
int main()
{
    complex c;
    c.printdata();
    return 0;
}
