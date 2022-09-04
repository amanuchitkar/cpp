#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int s)
    {
        size = s;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d +=this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<float> v1(3);
    v1.arr[0] = 9.8;
    v1.arr[1] = 1.9;
    v1.arr[2] = 1.4;
    vector<float> v2(3);
    v2.arr[0] = 1.90;
    v2.arr[1] = 6.1;
    v2.arr[2] = 1.578;
    float a = v1.dotproduct(v2);
    cout << a << endl; 

    vector<float> v3(3);
    v1.arr[0] = 9.8;
    v1.arr[1] = 1.9;
    v1.arr[2] = 1.4;
    vector<float> v4(3);
    v2.arr[0] = 1.90;
    v2.arr[1] = 6.1;
    v2.arr[2] = 1.5678;
    float b = v1.dotproduct(v2);
    cout << b << endl;
    return 0;
}