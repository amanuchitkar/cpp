#include<iostream>
using namespace std;
    class base{
        public:
        int bas_var=100;
       virtual void display(){
            cout<<"The base variabal value is "<<bas_var<<endl<<endl;
        }
    };
    class derived : public base{
        public:
        int der_var=98;
        void display(){
            cout<<"The base througe derived variabal value is "<<bas_var<<endl;
            cout<<"The derived variabal value is "<<der_var<<endl;
        }
    };
    int main(){
    base obj_bas;
    derived obj_der;

    base *base_pointer;
    base_pointer=&obj_der;
    base_pointer->bas_var;
    base_pointer->display();

    derived *derived_pointer=new derived (obj_der);
    derived_pointer->bas_var;
    derived_pointer->der_var;
    derived_pointer->display();

    
return 0;
}