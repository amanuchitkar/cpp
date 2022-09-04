#include <iostream>
using namespace std;
class Y;
class X
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(X,Y);
};
class Y
{
private:
    int num;

public:
    void setnum(int value)
    {
        num = value;
    }
    friend  void add(X,Y);
};
void add(X f1,Y f2){
    cout<<"Summing of X & Y object gives me "<<f1.data+f2.num<<endl;
}

int main()
{
    X a;
    a.setvalue(8);
    Y b; 
    b.setnum(9);
    add(a,b);

    return 0;
}