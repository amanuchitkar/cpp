#include<iostream>
using namespace std;
template <class T1=int,class T2=float,class T3=char>
    class aman{
        public:
        T1 a;
        T2 b;
        T3 c;
        aman(T1 x,T2 y,T3 z){
            a=x;
            b=y;
            c=z;
        }
        void display(){
            cout<<"The value of a is "<<this->a<<endl;
            cout<<"The value of b is "<<this->b<<endl;
            cout<<"The value of c is "<<this->c<<endl;
            
        }
    };
    int main(){
        aman<> A(54,89.9,'A');
        A.display();
        aman<float,char,int> B(4.9,'o',76);
        B.display();
return 0;
}