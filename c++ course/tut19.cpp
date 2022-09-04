#include<iostream>
using namespace std;

    int sum(int a, int b){ 
        
        return a + b;
    }
    
    int sum(int a, int b, int c){
        
        return (a + b + c);
    }
    // The volume of cylinder 
    int volume(double r, int h){
        return (3.14*r*r*h);
    }
    // The volume of a cube
    int volume(int a){
        return (a*a*a);
    }
    // The area of Rectrangle is
    int area(int l,int b){
        return (l*b);
    }
    // semi-perimeter of triangle
    int sperimeter(int a,int b,int c){
        return ((a+b+c)/2);
    }


    int main(){  
        cout<<"The sum of 5,6 is "<<sum(5,6)<<endl;
        cout<<"The sum of 5,6,7 is "<<sum(5,6,7)<<endl;
        cout<<"The volume of cylinder of r=5,h=6 is "<<volume(5,6)<<endl;
        cout<<"The volume of cube of r=5 is "<<volume(5)<<endl;
        cout<<"The area of rectrangle of l=5,b=6 is "<<area(5,6)<<endl;
        cout<<"The semi-perimeter trangle of a=6,b=5,c=7 is "<<sperimeter(6,5,7 )<<endl;
    
return 0;
}