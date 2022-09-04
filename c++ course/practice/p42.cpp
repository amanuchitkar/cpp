#include <iostream>
#include <cmath>
using namespace std;
class simpleCal
{
protected:
    float num1;
    float num2;

public:
    void set_Scal()
    {
        cout << "Enter first number " << endl;
        cin >> num1;
        cout << "Enter second number " << endl;
        cin >> num2;
    }
    void get_Scal()
    {
        int x;
        cout << "for addition 1,for substraction 2,for multiply 3,for divide 4" << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "The sum of number is " << num1 + num2 << endl;
            break;
        case 2:
            cout << "The substraction of number is " << num1 - num2 << endl;
            break;
        case 3:
            cout << "The multiply of number is " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 == 0)
            {
                cout << "The answer is infinity " << endl;
            }
            else
            {
                cout << "The dividtion of number is " << num1 / num2 << endl;
            }

            break;

        default:
            cout << "input is incorrect " << endl;
            break;
        }
    }
};
class scientific_cal
{
protected:
    float num;

public:
    void set_cals()
    {
        cout << "Enter first number " << endl;
        cin >> num;
    }
    void get_cals()
    {
        int y;
        cout << "for cas 1,for log 2,for sin 3,for tan 4" << endl;
        cin >> y;
        switch (y)
        {
        case 1:
            cout << "The answer is " << cos(num) << endl;
            break;
        case 2:
            cout << "The answer is " << log(num) << endl;
            break;
        case 3:
            cout << "The answer is " << sin(num) << endl;
            break;
        case 4:
            cout << "The answer is " << tan(num) << endl;
            break;
        default:
            cout << "input not match" << endl;
            break;
        }
    }
};
class HybradeCalculator : public simpleCal, public scientific_cal
{
public:
    void Display()
    {
        int a;
        cout << "for simple calculator press 1,for scientific calculator press 2" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            set_Scal();
            get_Scal();
            break;
        case 2:
            set_cals();
            get_cals();
            break;

        default:
        cout<<"inappropriat input "<<endl;
            break;
        }
    }
};
int main()
{
    HybradeCalculator H1;
    H1.Display();

    return 0;
}