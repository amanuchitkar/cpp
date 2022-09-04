#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumcomcomplex(complex, complex);
};
class complex
{
private:
    int a, b;
    friend int calculator::sumrealcomplex(complex, complex);
    friend int calculator::sumcomcomplex(complex, complex);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber(void)
    {
        cout << "Your complex number is " << a << '+' << b << 'i' << endl;
    }
};
int calculator::sumrealcomplex(complex f1, complex f2)
{
    return (f1.a + f2.a);
}
int calculator::sumcomcomplex(complex f1,complex f2){
    return (f1.b+f2.b);
}
int main()
{ 
    complex c1,c2;
    c1.setNumber(8,5);
    c2.setNumber(6,8);
    calculator cal;
    int res=cal.sumrealcomplex(c1,c2);
    cout<<"The  sum of real part of c1 and c2 is: "<<res<<endl;
    int resc=cal.sumcomcomplex(c1,c2);
    cout<<"The  sum of complex part of c1 and c2 is: "<<resc<<endl;
    
    
    return 0;
}