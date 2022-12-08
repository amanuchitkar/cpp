#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int i, n, large;
    cout << "How many numbers?" << endl;
    cin >> n;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> a[i];
    }
    large = a[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (large<a[i])
        large=a[i];
        
    }
    cout<<"Largest value = "<<large;

    return 0;
}