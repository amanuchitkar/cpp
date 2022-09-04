#include<iostream>
using namespace std;
int count=0;
    class num{
        public:
        num(){
            count++;
            cout<<"This time the constroctor is called for object number "<<count<<endl; 
        }
        ~num(){
            cout<<"This time the destroctor is called  for object number "<<count<<endl;
            count--;
        }
        

    };
    int main(){
        cout<<"we are inside our main function "<<endl;
        num N1;
        {
            cout<<"Entering this bloke "<<endl;
            cout<<"ceating two more object"<<endl;
            num N2,N3;
            cout<<"Exiting the block "<<endl;
        }
        cout<<"back to main"<<endl;
    
return 0;
}