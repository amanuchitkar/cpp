#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "Aaur bta kese he be?" << endl;
    }
};
class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base2::greet();
    }
};

int main()
{
    base1 B1;
    base2 B2;
    B1.greet();
    B2.greet();

    derived D;
    D.greet();

    return 0;
}