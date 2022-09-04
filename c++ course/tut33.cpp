#include <iostream>
using namespace std;
class Bankdeposit
{
    int principal;
    int year;
    float intrestRate;
    float returnVal;

public:
    Bankdeposit() {}
    Bankdeposit(int p, int y, float r)
    {
        principal = p;
        year = y;
        intrestRate = r;
        returnVal = principal;

        for (int i = 0; i < y; i++)
        {
            returnVal = returnVal * (1 + intrestRate);
        }
    }
    Bankdeposit(int p, int y, int r)
    {
        principal = p;
        year = y;
        intrestRate = float(r) / 100;
        returnVal = principal;

        for (int i = 0; i < y; i++)
        {
            returnVal = returnVal * (1 + intrestRate);
        }
    }
    void printdata()
    {
        cout << "The principal amount was " << principal << ". The return value after "
             << year << " year is " << returnVal << endl;
    }
};
int main()
{
    Bankdeposit b1, b2, b3;

    int p, y, R;
    float r;

    cout << "Enter the value of p,y and r." << endl;
    cin >> p >> y >> r;

    b1 = Bankdeposit(p, y, r);
    b1.printdata();

    cout << "Enter the value of p,y and R." << endl;
    cin >> p >> y >> R;

    b2 = Bankdeposit(p, y, R);
    b2.printdata();

    return 0;
}