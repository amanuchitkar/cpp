#include<iostream>
using namespace std;

    int main(){
  // What is a pointer? ----> Data type which holds the address of other data types----------------
    int a=8;
    int* b;
    b=&a;// & ---> (Address of) Operator
    cout<<"The address of a is: "<<b<<endl;
    cout<<"The address of a is: "<<&a<<endl;
    // * ---> (value at) Dereference operator--------------------------------------
    cout<<"The value at address b is: "<<*b<<endl;
    int** c=&b;
    cout<<"The address of b is: "<<b<<endl;
    cout<<"The value at address c is: "<<**c<<endl;
return 0;
}