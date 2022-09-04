#include <iostream>
using namespace std;
class Employee
{
    float Id;
    static int count;

public:
    void set_data(void)
    {
        cout << "Enter the Id:" << endl;
        cin >> Id;
        count++;
    }
    void get_data(void)
    {
        cout << "The Id of this  Employee is " << Id << " and this is Employee number " << count << endl;
    }
    static void get_count(void)
    {
        cout << "The value of count is:" << count << endl;
    }
};
int Employee::count;
int main()
{
    Employee aman, ashutosh, mrudul;
    aman.set_data();
    aman.get_data();
    Employee::get_count();

    ashutosh.set_data();
    ashutosh.get_data();
    Employee::get_count();
    
    mrudul.set_data();
    mrudul.get_data();
    Employee::get_count();
    return 0;
}