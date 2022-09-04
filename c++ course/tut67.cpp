#include <iostream>
using namespace std;
/*
float funcaverage(int a,int b)
{
    float avg = (a + b)/2.0;
    return avg;
}
*/
template <class T1, class T2>
float funcaverage(T1 a, T2 b)
{
    float avg = (a + b)/2.0;
    return avg;
}

int main()
{  
    float m;
    m = funcaverage(6.9,4.123);
    cout << "The value of average is " << m << endl;
    printf("The value of average is %.3f ", m);
    return 0;
}