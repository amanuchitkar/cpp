#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of 1st number:"<<endl;
    cin>>a;
    cout<<"Enter the value of 2nd number:"<<endl;
    cin>>b;
    if(a>b){
        cout<<a<<" is Greature than "<<b<<endl;
    }
    else if(a==b){
        cout<<a<<" Equal to "<<b<<endl;
    }
    else{
        cout<<b<<" is greature than "<<a<<endl;
    }
    return 0;
}