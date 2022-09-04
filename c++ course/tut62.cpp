#include<iostream>
#include<fstream>
#include<string>
using namespace std;
    
    int main(){
    ofstream out;
    out.open("sample60a.txt");
    out<<"This is a car.\n";
    out<<"Your are chutiya ";
    out.close();

    string st;
    ifstream in;
    in.open("sample60a.txt");
    while (in.eof()==0)
    {
    getline(in,st);
    cout<<st<<endl;
        
    }
    
    
    return 0;
}