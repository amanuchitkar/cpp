#include<iostream>
using namespace std;
main(){
    int a=56;
    float b=65.8990;
    cout<<"The value of a is: "<<(float)a<<endl;
    // -----------------OR-----------------
    cout<<"The value of a is: "<<float(a)<<endl;

    cout<<"The value of b is: "<<(int)b<<endl;
    //   ---------------OR------------------
     cout<<"The value of b is: "<<int(b)<<endl;
    cout<<"----------sum---------"<<endl;
    cout<<"The expression is: "<<a+b<<endl; 
    cout<<"The expression is: "<<a+(float)b<<endl; 
    cout<<"The expression is: "<<a+(int)b<<endl; 
    cout<<"The expression is: "<<a+int(b)<<endl;
    return 0;
}