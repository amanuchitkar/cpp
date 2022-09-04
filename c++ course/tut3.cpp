#include<iostream>
using namespace std;
int main(){ 
    int a=5,b=9;
    cout<<"Following the types of operators in c++: \n";
    // arithmatic operators
    cout<<"This is the value of a+b is  "<<a+b<<endl;
    cout<<"This is the value of a-b is  "<<a-b<<endl;
    cout<<"This is the value of a*b is  "<<a*b<<endl;
    cout<<"This is the value of a/b is  "<<a/b<<endl;
    cout<<"This is the value of a%b is  "<<a%b<<endl;
    cout<<"This is the value of a++ is  "<<a++<<endl;
    cout<<"This is the value of a-- is  "<<a--<<endl;
    cout<<"This is the value of ++a is  "<<++a<<endl;
    cout<<"This is the value of --a is  "<<--a<<endl;
    cout<<endl;
    // assignment operators--<use to assign value to variabales
    // ex-int a=5,b=6;
    // ex-char a="d";

    // comparison operators
    cout<<"Following are the comparison operators in c++: \n";
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<endl;

     // Logical operators
    cout<<"Following are the Logical operators in c++: \n";
    cout<<"The value of Logical 'AND' operators ((a==b) && (a<b)) is: "<<((a==b) && (a<b)) <<endl;
    cout<<"The value of Logical 'OR' operators ((a==b) || (a<b)) is: "<<((a==b) || (a<b)) <<endl;
    cout<<"The value of Logical 'NOT' operators (!(a==b)) is: "<<(!(a==b)) <<endl;

    return 0;
}