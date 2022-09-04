#include<iostream>
using namespace std;
    class shopitem{
        
        int Id;
        float price;
        public:
        void set_data(int i,float p){
            Id=i;
            price=p;
        }
        void get_data(){
            cout<<"The item Id is "<<Id<<endl;
            cout<<"The price of item is "<<price<<"rs."<<endl;
        }
    };
    int main(){
        int size=2;
        shopitem *ptr=new shopitem[size];
       shopitem *ptrtemp=ptr;
        int x,i;
        float y;
        for ( i = 0; i < size; i++)
        {
            cout<<"Enter the Id and price "<<i+1<<endl;
            cin>>x>>y;
            ptr->set_data(x,y);
            ptr++;
            
        }
        for ( i = 0; i < size; i++)
        {
            cout<<"Item number is "<<i+1<<endl;
            ptrtemp->get_data();
            ptrtemp++;
        }
        
        
    
return 0;
}