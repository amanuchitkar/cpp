#include<iostream>
using namespace std;
    class A{
        int a;
        public:
        A & set_Data(int a){
            // this” is a keyword that is an implicit pointer. 
            // “this” pointer points to the object which calls the member function.
            //  An example program is shown below to demonstrate the concept of “this” pointer.
            this->a=a;
            return *this;

        }
        void get_Data(void){
            cout<<"The value of a is: "<<a<<endl;
        }
    };
    int main(){
    A a;
    a.set_Data(4).get_Data();
    // a.get_Data();
return 0;
}