#include <iostream>
#include <cmath>
using namespace std;
class simpal_calc
{
    float a, b;

public:
    void get_data_S()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }
    void performOpration_S()
    {

        cout << "The value of a+b is " << a + b << endl;
        cout << "The value of a-b is " << a - b << endl;
        cout << "The value of a*b is " << a * b << endl;
        cout << "The value of a/b is " << a / b << endl;
    }
};
class scitific_calc
{
    float a, b;

public:
    void get_data_C()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }
    void performOpration_C()
    {

        cout << "The value of cos(a+b) is " << cos(a + b) << endl;
        cout << "The value of exp(a) is " << exp(a) << endl;
        cout << "The value of sin(b) is " << sin(b) << endl;
        cout << "The value of log(a) is " << log(a) << endl;
    }
};
class Hybrid_calc : public simpal_calc, public scitific_calc
{
};
int main()
{
    Hybrid_calc cal1, cal2;
    cal1.get_data_C();
    cal1.performOpration_C();

    cal2.get_data_S();
    cal2.performOpration_S();
    return 0;
}