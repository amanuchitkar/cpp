#include<iostream>
#include<math.h>
using namespace std;
int main(){
    bool flag=0;
    int n;
    cin>>n;
   for (int i = 2; i <=sqrt(n); i++)
   {
    if (n%i==0)
    {

        cout<<"Non-Prime"<<endl;
        flag=1;
        break;
    }
    
   }
   if (flag==0)
   {
    cout<<"Prime"<<endl;
   }
   
   
       
    
    return 0;
}