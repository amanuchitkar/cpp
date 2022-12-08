#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a and b."<<endl;
    cin>>a>>b;
    cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
    a=a+b;
    b=a-b;
    a=-b+a;
    // a=-(b-a);
    cout<<"The value of a is "<<a<<" and b is "<<b<<endl;

}
