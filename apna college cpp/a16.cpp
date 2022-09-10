#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse=0;

  while (n>0)
    {
         // remainder contains the last digit
        int lastdigit=n%10;
        // cout<<lastdigit;
        reverse=reverse*10+lastdigit;
         // removing last digit from the orignal number
        n=n/10;
    }
    cout<<reverse;
    return 0;
}