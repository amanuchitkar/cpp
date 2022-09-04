#include <iostream>
using namespace std;
class shopItem
{
    int Id;
    float price;

public:
    void set_Data(int I, float P)
    {
        Id = I;
        price = P;
    }
    void get_data()
    {
        cout << "The id of item is " << Id << endl;
        cout << "The price of item is " << price << endl;
    }
};
int main()
{
    int size = 2;
    shopItem *ptr = new shopItem[size];
    shopItem *ptrTemp=ptr;
    int x,i;
    float y;
    for(i=0;i<size;i++){
        cout<<"Enter id and price of item "<<i+1<<endl;
        cin>>x>>y;
        ptr->set_Data(x ,y);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout<<"Item number "<<i+1<<endl;
        ptrTemp->get_data();
        ptrTemp++;
    }
    
    

    return 0;
}