#include <iostream>
using namespace std;
class baseClass
{
public:
    int var1 = 8;
    virtual void Display()
    {
        cout << "1) The value of base variable is " << var1 << endl;
    }
};
class derived_c : public baseClass
{
public:
    int var2 = 89;
    void Display()
    {
        cout << "2) The value of base variable is " << var1 << endl;
        cout << "3) The value of derived variable is " << var2 << endl<<endl;
    }
};
int main()
{

    baseClass *B_class_poin = new derived_c;
    derived_c *D_class_poin=new derived_c;
    // B_class_poin=&Obj_b;
    B_class_poin->var1 = 29;
    B_class_poin->Display();

    D_class_poin->var2=68;
    D_class_poin->Display();

    baseClass b;
    b.Display();
    

    return 0;
}