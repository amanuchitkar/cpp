#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

    int main(){
    int arr[]={5,8,2,9,6,4,3,1};
    // sort(arr,arr+9);
    sort(arr,arr+9,greater<int>());
    for (int i = 0; i <= 8; i++)
    {
    cout<<arr[i]<<endl;
        
    }
    
return 0;
}