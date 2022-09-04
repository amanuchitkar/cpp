#include<iostream>
using namespace std;
int c=455;
int main(){
    int a,b,c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum is: "<<c<<endl;
    // by difalt it take local c 
    cout<<"The global c is:"<<::c;
    // by using :: it take  global c
     
    return 0;
}