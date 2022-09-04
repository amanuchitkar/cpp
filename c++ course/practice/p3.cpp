#include<iostream>
using namespace std;
    class Employee{
        float Id;
       static int count;
        public:
        void setdata(void){
            cout<<"Enter the Employee Id"<<endl;
            cin>>Id;
            count++;
        }
        void getdata(void){
            cout<<"The Employee Id is "<<Id<<"and this is Employee number "<<count<<endl;
        }
       static void getcount(void){
            cout<<"The number of employee is "<<count<<endl;
        }
    };
    int Employee::count;
    int main(){
    Employee aman,nayan,pranav,anvesh;
    aman.setdata();
    aman.getdata();
    aman.getcount();

    nayan.setdata();
    nayan.getdata();
    nayan.getcount();

    pranav.setdata();
    pranav.getdata();
    pranav.getcount();

    anvesh.setdata();
    anvesh.getdata();
    anvesh.getcount();

return 0;
}