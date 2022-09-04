#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    cout<<"Displaying this vector "<<endl;
    for (T i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

    int main(){
        int element,size=5;
        vector<int>vec1;
        vector<char> vec2(4);
        vec2.push_back('5');
        display(vec2);

        vector<char>vec3(vec2);
        vec3.push_back('0');
        display(vec3);

        vector<int>vec4(3,89);
        display(vec4);

return 0;
}