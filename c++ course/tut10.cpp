#include<iostream>
using namespace std;

    int main(){
        cout<<"break:----"<<endl;
     for (int i = 0; i <=20; i++)
     {
         cout<<i<<endl;
         if (i==2)
         {
             break;
         }
         
     }
     cout<<endl;
     cout<<"Cntinue:--- "<<endl;
     
     for (int i = 0; i <=8; i++)
     {
         
         if (i==5)
         {
             continue;
         }
         cout<<i<<endl;
         
     }
     
return 0;
}