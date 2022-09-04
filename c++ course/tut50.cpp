#include <iostream>
using namespace std;

int main()
{
    // basic example
    int a = 8;
    int *ptr = &a;
    cout << "The value of a is " << ptr << endl;
    cout << "The value of a is " << *(ptr) << endl;
    cout << "The value of a is " << &a << endl
         << endl;

    // new keyword
    // int* p=new int(40);
    float *p = new float(40.986);
    cout << "The value of p is " << p << endl;
    cout << "The value of p is " << *p << endl
         << endl;
    ;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    // delete[] arr;
    cout << "The value of array is " << arr << endl;
    cout << "The value of array is " << arr[0] << endl;
    cout << "The value of array is " << arr[1] << endl;
    cout << "The value of array is " << arr[2] << endl;

    // Delete operator
    delete arr;
    return 0;
}