#include<iostream>
using namespace std;
    class Employee{
        public:
        int Id;
        float salary;
        Employee(){}
        Employee(int inpId){
            Id=inpId;
            salary=32.08;
        }
       
    };

    // Derived Class syntax
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
    Note....
    1) Default visibility mode is private.
    2) private visibility Mode: Public members of base class become private members of derived class.
    3) public visibility Mode: Public members of base class become public members of derived class.
    4) In any case private members of base class can't inherited.
}*/

// Creating a Programmer class derived from Employee Base class

class programmer:public Employee{
    public:
    programmer(int impId){
        Id=impId;
    }
    int languagecode=9;
     
     void getdata(){
         cout<<"The id of programmer is "<<Id<<" and coding language he know is "<<languagecode<<"."<<endl;
     }
};
    int main(){
        Employee Mrudul(1),Pranav(2),E3(3);
        cout<<"The Id of employee is "<<Mrudul.Id<<" and salary is "<<Mrudul.salary<<endl;;
        cout<<"The Id of employee is "<<Pranav.Id<<" and salary is "<<Pranav.salary<<endl;;
        

        programmer latish(12);
       latish.getdata();

        

return 0;
}