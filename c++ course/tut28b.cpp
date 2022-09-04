#include <iostream>
using namespace std;
class c2;
class c1
{
    int val1;

public:
    void intdata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
    friend void exchange(c1 &, c2 &);
};
// -------------------------------------------------------------
class c2
{
    int val2;

public:
    void intdata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
    friend void exchange(c1 &, c2 &);
};
// -------------------------------------------------------------------
void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{

    c1 f1;
    c2 f2;

    f1.intdata(611111111);
    
    f2.intdata(9);
    
    // ----------------------------------------------------------------------------------
    exchange(f1, f2);
    cout << "The value of f1 after exchanging becomes ";
    f1.display();
    cout << "The value of f2 after exchanging becomes ";
    f2.display();
    return 0;
}