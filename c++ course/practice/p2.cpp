#include <iostream>
using namespace std;
class shop
{
    float item_Id[100];
    int item_Price[100];
    int counter;

public:
    void init_counter(void) { counter = 0; }
    void set_Id(void);
    void display_price(void);
};
void shop::set_Id(void)
{
    cout<<counter +1<<").Enter your item Id:"<<endl;
    cin>>item_Id[counter];
    cout<<"Enter price of your item:"<<endl;
    cin>>item_Price[counter];
    counter ++;
}
void shop::display_price(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The id "<<item_Id[i]<<" is price is "<<item_Price[i]<<"rs"<<endl;
    }
    
}
int main()
{
    shop uchitkarx;
    uchitkarx.init_counter();
    uchitkarx.set_Id();
    uchitkarx.set_Id();
    uchitkarx.display_price();

    return 0;
}