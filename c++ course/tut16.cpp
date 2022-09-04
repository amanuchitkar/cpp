#include<iostream>
using namespace std;
int sum(int a,int b){
int c=a+b;
return c;
}
// this will not swap a and b-----------------
 void swap(int a,int b){
     int temp = a;
        a = b;
        b =temp;

 }
 // Call by reference using pointers
 void swapPointer(int* a,int* b){
     int temp = *a;
        *a = *b;
        *b =temp;
 }
 // Call by reference using C++ reference Variables
// int & 
 int & swapReferenceVar(int &a,int &b){
      int temp = a;
        a = b;
        b =temp;
    return a;
 }
int main(){
    int x = 4,y = 5;
     swap(x,y);// This will not swap a and b-----------------
    cout<<"The value of a is "<<x<<" and the value of b is "<<y<<endl;
   

    swapPointer(&x,&y);// This will  swap a and b using pointer reference 
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
   
    swapReferenceVar(x,y)=788; //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    return 0;
}