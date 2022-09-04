#include<iostream>
using namespace std;
       // typedef do a short cut to make struct employee ---to--- ep 
    //    struct exampals--------------------------------
       
    typedef struct employee
    {
        /* data */
        int Id;
        char favchar;
        float salary;

    }ep;
// -------------------------------------------------------------------------------------
// union exampals------------------------------------------------------------
   typedef union money
    {
        int rice;
        char car;
        float pounds;
    }um;
    
    int main(){

        // struct employee aman;--------------------------------------
        // ep aman; both are same 
        // ep shubham;
        // aman.Id= 1;
        // aman.favchar= 'c';
        // aman.salary=13000000;
        // cout<<"The Id is "<<aman.Id<<endl;
        // cout<<"The favchar is "<<aman.favchar<<endl;
        // cout<<"The salary is "<<aman.salary<<endl;

        // ------------union------------------------------------
        // um rs;
        // rs.car='y';
        // rs.rice=88;
        // cout<<rs.rice;

        
    
return 0;
}