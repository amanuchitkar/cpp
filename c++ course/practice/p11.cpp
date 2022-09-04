#include <iostream>
using namespace std;
class bankdeposit
{
    int principal;
    int year;
    float intrestRate;
    float returnValue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int r);
    void printData();
};

bankdeposit::bankdeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    intrestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}
bankdeposit::bankdeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    intrestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}
void bankdeposit::printData()
{
    cout << "The principal amount was " << principal << ". The return value after " << year << " year is " << returnValue << endl;
}
int main()
{
    bankdeposit b1,b2,b3,b4;
    int p,y,R;
    float r;


    cout<<"Enter the value of p,y and r. "<<endl;
    cin>>p>>y>>r;
    b1=bankdeposit(p,y,r);
    b1.printData();

    cout<<"Enter the value of p,y and R. "<<endl;
    cin>>p>>y>>R;
    b1=bankdeposit(p,y,R);
    b1.printData();




    return 0;
}