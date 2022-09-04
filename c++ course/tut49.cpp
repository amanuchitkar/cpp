#include <iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

class test
{
    int j;
    int k;

public:
    // test(int a, int b) : j(a), k(b)
    // test(int a, int b) : j(a), k(b+a)
    // test(int a, int b) : j(a), k(5*b)
    // test(int a, int b) : j(a), k(j+b)
    // test(int a, int b) : k(b),j(k+a)--->Red flag for this create problems becouse a will be initialized first
    test(int a, int b) : j(a+b),k(b+j)
    {
        cout << "constructor running:" << endl;
        cout << "The value of a  is " << j << endl;
        cout << "The value of b  is " << k << endl;
    }
};
int main()
{
    test T1(6,5);
    return 0;
}