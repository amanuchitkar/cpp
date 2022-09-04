#include<iostream>
using namespace std;
    class complex{
        int a,b;
        public:
        complex(int,int);
        void printdata(void){
            cout<<"The complex number is "<<a<<" + "<<b<<" i"<<endl;
        }
    };
    complex::complex(int x,int y){
        a=x;
        b=y;
    }
    int main(){
         // Implicit call
        complex c1(8,9);
        c1.printdata();

        // Explicit call
        complex c2=complex(9,6);
        c2.printdata();
    
return 0;
}