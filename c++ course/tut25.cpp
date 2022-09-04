#include<iostream>
using namespace std;
    class Employee{
        float Id;
        int salary;
        public:
        void setId(void){
            salary=1222;
            cout<<"Enter the Employee Id "<<endl;
            cin>>Id;
        }
        void getId(void){
            cout<<"The Id of Employee "<<Id<<endl;
        }
    };
    int main(){
        Employee fb[100];
    for (int i = 0; i <=100 ; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    
return 0;
}