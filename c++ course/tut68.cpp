#include<iostream>
using namespace std;
template <class T>
    class aman{
        public:
        T data;
        aman(T a){
            data=a;
        }
        void display();
    };
template <class T>
     void aman<T>::display(){
         cout<<data<<endl<<endl;
     }
void func(int c){
    cout<<"I am first func()"<<endl;
}
template <class T>
void func1(T c){
    cout<<"I am templated func()"<<endl;
}

    int main(){
        // aman<int> a(78);
        // aman<float> a(5.97);
        aman<char> a('n');
        cout<<a.data<<endl;
        a.display();

        func(8);
        func1(8);
return 0;
} 