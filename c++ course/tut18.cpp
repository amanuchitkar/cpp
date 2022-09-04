#include<iostream>
using namespace std;

    int factorial(int n){
        if (n<=1)
        {
            return 1;
        }
        
        return n * factorial(n-1);
    }
    int main(){
          // Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by definition
    // 1! = 1 by definition
    // n! = n * (n-1)!
        int num;
    cout<<"Enter number :"<<endl;
    cin>>num;
    cout<<"The factorial of "<<num<<" is "<<factorial(num)<<endl;
return 0;
}