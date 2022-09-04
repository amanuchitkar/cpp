#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;

public:
    void read(void);
    void chek_bin(void);
    void ones_compliment(void);
    void display_b(void);
    void display_a(void);
};

void binary::read(void)
{
    cout << "Enter the binary number:" << endl;
    cin >> s;
}

void binary::chek_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Incorrect binary format:" << endl;
            exit(0);
        }
    }
}
void binary::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}
void binary::display_b(void){
    cout<<"Displaying befor ones compliment:"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
void binary::display_a(void){
    cout<<"Displaying after ones compliment:"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}

int main()
{
    binary a;
    a.read();
    a.chek_bin();
    a.display_b();
    a.ones_compliment();
    a.display_a();
    return 0;
}