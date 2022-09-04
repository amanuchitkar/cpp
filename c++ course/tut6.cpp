#include<iostream>
#include<iomanip> 

using namespace std;
int main(){
    // ----------------Manipulator--------
    int a=5,b=700,c=9000,d,x;
    cout<<"The value of a is: "<<setw(7)<<a<<endl;
    cout<<"The value of b is: "<<setw(7)<<b<<endl;
    cout<<"The value of c is: "<<setw(7)<<c<<endl;
    cout<<endl;
    cout<<"The value of a whitout setw is: "<<a<<endl;
    cout<<"The value of b whitout setw is: "<<b<<endl;
    cout<<"The value of c whitout setw is: "<<c<<endl; 
cout<<endl;
    // ---Operator Precedence & Operator Associativity--
    a=6,b=9;
    c=(a*5)+b;
    cout<<"The value of product of a & 5 and sum of product and b is: "<<c<<endl;
    cout<<"Enter the value of x"<<endl;

    cin>>x;
    d=((((a*5)+b)+48)+x);
    cout<<"The value of d=((((a*5)+b)+48)+x) is :"<<d; 
    return 0;
}