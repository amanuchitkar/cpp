#include<iostream>
using namespace std;
    class base1{
        int data1;
        public:
       base1(int i){
           data1=i;
           cout<<"base1 class constroctor called "<<endl;
        }
        void getdata1(){
            cout<<"The value of data1 is "<<data1<<endl;
        }
    };
    class base2{
        int data2;
        public:
        base2(int j){
            data2=j;
            cout<<"base2 class constroctor called "<<endl;
        }
        void getdata2(){
            cout<<"The value of data2 is "<<data2<<endl;
        }
    };
    class derived : public base1,public base2{
        int der1,der2;
        public:
        derived(int a,int b,int c,int d):base1(a),base2(b){
            der1=c;
            der2=d;
            cout<<"derived class constroctor called"<<endl;
        }
        void getdata(){
            getdata1();
            getdata2();
            cout<<"The value of dr1 is "<<der1<<endl;
            cout<<"The value of dr2 is "<<der2<<endl;
        }

    };
    int main(){
        derived d1(2,5,78,56);
        d1.getdata();
    
return 0;
}