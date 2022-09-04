#include<iostream>
using namespace std;

    int main(){
// array examepales 1--------------------
    int marke[]={5,90,70,99};
    cout<<"There are marke"<<endl;
     marke[1]=100;
    cout<<marke[0]<<endl;
    cout<<marke[1]<<endl;
    cout<<marke[2]<<endl;
    cout<<marke[3]<<endl;

    cout<<endl;
    // You can change the value of an array  marke[1]=100;
    // array examepales 2------------------------------------------------------------------------------------

    int mathmarke[5];
    mathmarke[0] = 56;
    mathmarke[1] = 80;
    mathmarke[2] = 78;
    mathmarke[3] = 01;
    mathmarke[4] = 59;
    cout<<"There are mathmarke "<<endl;
    mathmarke[3]=564;
    cout<<mathmarke[0]<<endl;
    cout<<mathmarke[1]<<endl;
    cout<<mathmarke[2]<<endl;
    cout<<mathmarke[3]<<endl;
    cout<<mathmarke[4]<<endl;
return 0;
}