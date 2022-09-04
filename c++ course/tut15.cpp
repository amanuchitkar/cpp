#include<iostream>
using namespace std;
    // Function prototype
// type function-name (arguments);
// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable 
int sum(int, int); //--> Acceptable 
// void g(void); //--> Acceptable 
void g(); //--> Acceptable 
    
    int main(){
        
        int num1,num2;
        cout<<"Enter the value of first number "<<endl;
        cin>>num1;
        cout<<"Enter the value of second number "<<endl;
        cin>>num2;
         // num1 and num2 are actual parameters
        cout<<"The sum is "<<sum(num1,num2) ;  
        g() ;
return 0;
}
 // Formal Parameters a and b will be taking values from actual parameters num1 and num2.
int sum(int a,int b){
    int c=a+b;
    return c;
}
void g(){
    cout<<"\nGood morning";
}