#include<iostream>
using namespace std;
  int product(int a,int b){
        static int c=0;
        c=c+1;// This executes only once
        // Next time this function is run, the value of c will be retained
        return a*b+c;
   }
   float moneyReceived(int currentMoney,float factor=1.04){
       return currentMoney * factor;
   }
    int main(){ 
        // int a ,b;
        // cout<<"Ente the value of a and b :"<<endl;
        // cin>>a>>b;
        // cout<<"The product of a and b is: "<<product(a,b)<<endl;
        // cout<<"The product of a and b is: "<<product(a,b)<<endl;
        // cout<<"The product of a and b is: "<<product(a,b)<<endl;
        // cout<<"The product of a and b is: "<<product(a,b)<<endl;
        // ------------------------------------------------------------------------------------
        int money=10000;
        cout<<"If you have "<<money<<" Rs in your bank account, you well recive "<<moneyReceived(money)<<" after 1 year."<<endl;
        cout<<"For vip :If you have "<<money<<" Rs in your bank account, you well recive "<<moneyReceived(money, 1.1)<<" after 1 year.";
return 0;
}