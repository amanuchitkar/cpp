#include<iostream>
using namespace std;
int main(){
    int a[100];
    int i,j,n,temp;
    cout<<"How many numbers?"<<endl;
    cin>>n;
    cout<<"enter the element : "<<endl;
    for (int i = 0; i <=n-1; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i <=n-1 ; i++)
    {
        for (int j = 0; j <=n-1; j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    cout<<"Asending order"<<endl;
    for (int i = 0; i <=n-1; i++)
    {
        cout<<a[i]<<'\t';
    }
    
    

    return 0;
}