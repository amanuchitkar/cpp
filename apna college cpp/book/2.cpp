#include <iostream>
using namespace std;
int main()
{
   int i,n,temp;
   cout<<"Enter one intiger: ";
   cin>>n;
   for ( i = 1; i <=n; i++)
   {
        temp=i;
        for (int j = 1; j <=i; j++)
        {
            cout<<temp;
            temp=temp-1;
        }
        cout<<endl;
   }
   
    return 0;
}