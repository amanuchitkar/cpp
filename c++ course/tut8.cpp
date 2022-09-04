#include<iostream>
using namespace std;
int main(){
    // 2. Selection control structure: Switch Case statements
    int age;
    cout<<"Tell me you'r age: "<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You'r age is 18."<<endl;
        break;
    case 30:
        cout<<"You'r age is 30."<<endl;
        break;
    case 5:
        cout<<"You'r age is 5."<<endl;
        break;
    
    default:
    cout<<"You'r not in spacial case"<<endl;
        break;
    }
    cout<<"Done with switch case";
    return 0;
}