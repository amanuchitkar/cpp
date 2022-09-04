#include<iostream>
using namespace std;

    int main(){
        int n,R;
    cout<<"Enter the table number: "<<endl;
    cin>>n;
    cout<<"Enter your table range "<<endl;
    cin>>R;
    for (int i = 1; i <= R; i++)
    {
        cout<<n<<'*'<<i<<'='<<n*i<<endl;
    }
    
return 0;
}