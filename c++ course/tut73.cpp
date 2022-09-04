#include<iostream>
#include<map>
using namespace std;

    int main(){
    map<string, int> marksmap;
    marksmap["aman"]=78;
    marksmap["ashutosh"]=74;
    marksmap["mrudul"]=90;

    marksmap.insert({{"pranav",80},{"latish",85}});
    map<string,int>::iterator iter;
        for (iter=marksmap.begin();iter!=marksmap.end(); iter++)
        {
            cout<<(*iter).first<<" "<<(*iter).second<<endl;
        }
        
cout<<"The size is "<<marksmap.size()<<endl;
cout<<"The max size is "<<marksmap.max_size()<<endl;
cout<<"The empty return value  is "<<marksmap.empty()<<endl;
return 0;
}