#include <iostream>
using namespace std;
class shop
{
    float itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayprice(void);
};
void shop::setPrice(void)
{
    cout << "Enter Id of your item: " << counter + 1 << endl;
    cin >> itemId[counter];
    cout<<"Enter price of your item: "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop ::displayprice(void){
    for (int i = 0; i < counter; i++)
    {
       cout<<"The price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}
int main()
{
shop mundrikal;
mundrikal.initCounter();
mundrikal.setPrice();
mundrikal.setPrice();
mundrikal.setPrice();
mundrikal.displayprice();
    return 0;
}