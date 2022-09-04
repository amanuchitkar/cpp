#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the yaer:"<<endl;
    cin>>year;
    if (year % 400==0)
    {
        cout<<year<<" It is a leap year";
    }
    else if (year % 4==0)
    {
      cout<<year<<" is leap year";
    }
    else if (year%100==0)
    {
        cout<<year<<" it is NOT leap year";
    }
    
    else
    {
        cout<<year<<" Is not a leap year";
    }
    
    return 0;
}