#include<iostream>
using namespace std;
class point{
    int a,b;
    public:
    point(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"The coordinate points are ("<<a<<','<<b<<")."<<endl;
    }
};
    int main(){
        point p1(45,67),p3(545,56);
        p1.display();
        p3.display();
        point p2= point(34,67);
        p2.display();
    
return 0;
}