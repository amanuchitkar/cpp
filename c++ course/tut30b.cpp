#include<iostream>
using namespace std;
 class point{
     int x,y;
     public:
     point(int a,int b){
         x=a;
         y=b; 
     }
     void display(void){
         cout<<"The points are ("<<x<<","<<y<<")"<<endl;
     }
 };
    int main(){
        point p1(5,8);
        p1.display();
        point p2(6,8);
        p2.display(); 
    
return 0;
}