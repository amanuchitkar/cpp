#include<iostream>
#include<vector>
using namespace std;
    void Display(vector<int> &v){
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
            cout<<v.at(i)<<" ";
        }
        cout<<endl;
    }
    int main(){
        // ways to make vector 
        int element,size;
        cout<<"Enter the size of vector ";
        cin>>size;
        vector<int> vec1; //zero lenght vecor
        for (int i = 0; i < size; i++)
        {
            cout<<"Enter an element to add to this vector ";
            cin>>element;
            vec1.push_back(element);
        }
        // vec1.pop_back();
        Display(vec1);
        vector<int>:: iterator iter=vec1.begin();
        vec1.insert(iter+1,9,599);
        Display(vec1);
return 0;
}