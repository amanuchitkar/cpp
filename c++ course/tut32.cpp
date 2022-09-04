#include <iostream>
using namespace std;
class simple
{
    int data1, data2, data3;

public:
    simple(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printdata(void);
};
void simple::printdata(void)
{
    cout << "The value of data1,data2 and data3 is " << data1 << ',' << data2 << " and " << data3 << endl;
}
int main()
{
    simple s1(687856, 78);
    s1.printdata();

    return 0;
}