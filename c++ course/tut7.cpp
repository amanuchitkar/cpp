#include<iostream>
using namespace std;
int main(){
//    1. Selection control structure: If else-if else ladder
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"You are kid you can't come in party: "<<endl;
    }
    else if(age==18){
        cout<<"You can not come in party: " <<endl;
    }
    else if(age<1){
        cout<<"You are not yet born"<<endl; 
    }
    else{
        cout<<"You come in the party at 12th april 8:30 am"<<endl;
    }
    return 0;
}