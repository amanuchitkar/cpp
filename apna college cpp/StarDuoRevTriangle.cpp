#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = n; j >=i; j--)
        {
            cout<<" *";
        }
        for (int y = 3; y <=i*2; y++)
        {
            cout<<"  ";
        }
        for (int x = 0; x <=(n-i); x++)
        {
            cout<<" *";
        }
        
        
        cout<<endl;
    }
    
    return 0;
}