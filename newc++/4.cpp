#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 7; i++)
    {
        int day;
    cout<<"Enter the number between 1 to 7"<<endl;
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"monday"<<endl;
        break;
    case 2:
        cout<<"Tuesday"<<endl;
        break;
    case 3:
        cout<<"Wednesday"<<endl;
        break;
    case 4:
        cout<<"Thuesday"<<endl;
        break;
    case 5:
        cout<<"Firday"<<endl;
        break;
    case 6:
        cout<<"Saturday"<<endl;
        break;
    case 7:
        cout<<"Sunday"<<endl;
        break;
    
    default:
    cout<<"Enter Apropriat anser"<<endl;
        break;
    }
    }
    
   
    return 0;
}
