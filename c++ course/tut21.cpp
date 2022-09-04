#include<iostream>
using namespace std;
    class Employee{
        private:
        int a,b;
        public:
        int c,d;
        void setdata(int a1,int b1);
        void getdata(){
            cout<<"The salary is "<< a <<endl;
            cout<<"The pramotion is "<< b <<endl;
            cout<<"The incriment per cent is "<< c <<endl;
            cout<<"The tabel number is "<< d <<endl;
        }
    };
    void Employee::setdata(int a1,int b1){
        a=a1;
        b=b1;
    }
    int main(){
        Employee aman;
        cout<<"For aman"<<endl;
        aman.c=18;
        aman.d=1;
        aman.setdata(1000,5000);
        aman.getdata();
        Employee ashutosh;
        cout<<"For ashutosh"<<endl;
        ashutosh.c=18;
        ashutosh.d=2;
        ashutosh.setdata(30000,10000);
        ashutosh.getdata();
        Employee mrudul;
        cout<<"For mrudul"<<endl;
        mrudul.c=18;
        mrudul.d=3;
        mrudul.setdata(40000,4000);
        mrudul.getdata();
        Employee anish;
        cout<<"For anish"<<endl;
        anish.c=18;
        anish.d=4;
        anish.setdata(60000,3000);
        anish.getdata();
        Employee pranav;
        cout<<"For pranav"<<endl;
        pranav.c=17;
        pranav.d=5;
        pranav.setdata(100000000,7000);
        pranav.getdata();
return 0;
}