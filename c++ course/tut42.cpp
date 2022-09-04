#include <iostream>
#include <cmath>
using namespace std;
class simpal_calculator
{
protected:
    float num1, num2;

public:
    void setC()
    {

        cout << "Enter the 1st NO." << endl;
        cin >> num1;
        cout << "Enter the 2st NO." << endl;
        cin >> num2;
    }
    void cal_sim()
    {
        int x;
        cout << "Enter 1 for addition,2 for subtraction,3 for multiply,4 for divition." << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "The answer is " << num1 + num2 << endl;
            break;

        case 2:
            cout << "The answer is " << num1 - num2 << endl;
            break;

        case 3:
            cout << "The answer is " << num1 * num2 << endl;
            break;

        case 4:
            if (num2 == 0)
            {
                cout << "Answer is infinity" << endl;
            }
            else
            {
                cout << "The answer is " << num1 / num2 << endl;
            }
            break;

        default:
            cout << "invalid input" << endl;
            break;
        }
    }
};
class Scientific_Calculator
{
protected:
    float num;

public:
    void set_s()
    {
        cout << "Enter number" << endl;
        cin >> num;
    }
    void scin_cal()
    {
        int y;
        cout << "1 for natural log, 2 for common log,3 for squr root , 4 for absulute value,5 for cos:" << endl;
        cin >> y;
        switch (y)
        {
        case 1:
            cout << "The answer is " << log(num) << endl;
            break;
        case 2:
            cout << "The answer is " << log10(num) << endl;
            break;
        case 3:
            cout << "The answer is " << sqrt(num) << endl;
            break;
        case 4:
            cout << "The answer is " << abs(num) << endl;
            break;
        case 5:
        cout<<"The answer is "<<cos(num)<<endl;
            break;

        default:
            cout << "input is invalid" << endl;
            break;
        }
    }
};
class Hybrid_calculator : public simpal_calculator, public Scientific_Calculator
{
public:
    void Hbrd_cal()
    {
        int z;
        cout << "for simpl calculation 1,for scintific calculator 2" << endl;
        cin >> z;
        switch (z)
        {
        case 1:
            cout << "Functions for simpal calculator" << endl;
            setC();
            cal_sim();
            break;
        case 2:
            cout << "Functions for scintific calculator" << endl;
            set_s();
            scin_cal();
            break;

        default:
        cout<<"incorrect input"<<endl;
            break;
        }
    }
};
int main()
{
    Hybrid_calculator H1;
    H1.Hbrd_cal();

    return 0;
}