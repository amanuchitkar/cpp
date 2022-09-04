#include <iostream>
using namespace std;
class base_class
{
public:
    int var_base;
    void display()
    {
        cout << "The base class variable are " << var_base << endl;
    }
};
class derived_class : public base_class
{
public:
    int var_derived;
    void display()
    {
        cout << "The base class variables throug derived class are " << var_base << endl;
        cout << "The derived class variables are " << var_derived << endl;
    }
};
int main()
{
    base_class obj_base;
    derived_class obj_derived;

    base_class *base_class_pointer;
    base_class_pointer = &obj_derived;

    base_class_pointer->var_base = 56;
    // base_class_pointer->var_derived=145;------>this will not run.
    base_class_pointer->display();

    base_class_pointer->var_base = 900000000;
    base_class_pointer->display();

    cout << endl;

    derived_class *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 78;
    derived_class_pointer->var_derived = 90;
    derived_class_pointer->display();

    return 0;
}