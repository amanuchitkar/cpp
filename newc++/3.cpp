#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "SUM OF NATURAL NUMBERS" << endl;
    cout << "range" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum = " << sum << endl;
    int a = 2, b = 3, c;
    a = a + b;
    b = a - b;
    a = -b + a;

    c = a;
    a = b;
    b = c;

    swap(a, b);

    cout << "a = " << a << endl
         << "b = " << b;
    return 0;
}