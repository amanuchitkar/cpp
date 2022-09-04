#include<iostream>
using namespace std;
class c2;
class c1{
   int val1;
   public:
   void indata(int a){
       val1=a;
   }
   void display(void){
       cout<<val1<<endl;
   }
   friend void exchanging(c1 &,c2 &);
};
class c2{
   int val2;
   public:
   void indata(int b){
       val2=b;
   }
   void display(void){
       cout<<val2<<endl;
   }
   friend void exchanging(c1 &,c2 &);
};
void exchanging(c1 &x,c2 &y){
    int temp =x.val1;
    x.val1=y.val2;
    y.val2=temp;
}
    int main(){
        c1 f1;
        c2 f2;
        f1.indata(5999);
        f2.indata(608);
        cout<<"The value of f1 before exchanging is:";
        f1.display();
        cout<<"The value of f2 before exchanging is:";
        f2.display();
    cout<<"-----------------------------------------------------------------------------------------"<<endl;


    exchanging(f1,f2);
        cout<<"The value of f1 after exchanging is:";
        f1.display();
        cout<<"The value of f2 after exchanging is:";
        f2.display();

return 0;
}