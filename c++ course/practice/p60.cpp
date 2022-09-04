#include<iostream>
#include<fstream>
using namespace std;
    
    int main(){
        string s="This is the example of ofstream ";
        ofstream out("p60a.txt");
        out<<s;

        string s2;
        ifstream in("p60b.txt");
        // in>>s2;
        getline(in,s2);
        cout<<s2<<endl;;
        getline(in,s2);
        cout<<s2;
       
return 0;
}