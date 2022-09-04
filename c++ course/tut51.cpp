#include<iostream>
using namespace std;
    class complex{
        int real;
        int imaginary;
        public:
        void get_Data(){
            cout<<"The real number is "<<real<<endl;
            cout<<"The imaginary number is "<<imaginary<<endl;
        }
        void set_Data(int a,int b){
            real=a;
            imaginary=b; 
        }
    };
    int main(){
        // complex c1;
        // complex *ptr=&c1;
        complex *ptr=new complex;

        // (*ptr).set_Data(1,34); is exactly same as 

        ptr->set_Data(1,34);

        // (*ptr).get_Data(); is exactly same as 
        ptr->get_Data();
    
return 0;
}