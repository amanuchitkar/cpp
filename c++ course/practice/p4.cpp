#include<iostream>
using namespace std;
    class complex{
        int a;
        int b;
        public:
        void setdata(int v1,int v2){
            a=v1;
            b=v2;
        }
        void setDataBySum(complex o1,complex o2){
            a=o1.a+o2.a;
            b=o1.b+o2.a;
        }
        void printNumber(){
            cout<<"You'r complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
    };
    int main(){
        complex c1,c2,c3;
        c1.setdata(33,76);
        c1.printNumber();

        c2.setdata(9,56);
        c2.printNumber();

        c3.setDataBySum(c1,c2);
        c3.printNumber();
    
return 0;
}