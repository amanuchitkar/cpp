#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    private:
    int b;

};



/*
For protected members:
|______________________________________________________________________________________________________|
|	                      |     Public Derivation  |    Private Derivation   |   Protected Derivation  | 
|1) Private members       |    	Not Inherited      |       Not Inherited     |       Not Inherited     |         
|2) Protected members     |         Protected      |         Private         |          Protected      |              
|3) Public members        |   	Public	Private    |        Protected        |         Protected       |
|_________________________|________________________|_________________________|_________________________|
*/
class Derived : protected base{

};


    int main(){
        Derived D1;
        // cout<<D1.a;  // Will not work since a is protected in both base as well as derived class
    
return 0;
}