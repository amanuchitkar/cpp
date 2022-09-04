#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream aout("sample60a.txt");
    string name;
    cout << "Enter your name " << endl;
    cin >> name;

    aout << "My name is " + name;
    aout.close();

    string content;
    ifstream ain("sample60a.txt");
    // ain>>s;
    getline(ain, content);
    cout << "The content of the file  is: " << content;
    ain.close();

    return 0;
}