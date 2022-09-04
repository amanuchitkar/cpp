#include<iostream>
using namespace std;

    int main(){
        int i=0;
        int marke[]={5,89,56,78,108,9,10,68,70,59,100,60,99};
    // using 'FOR'loop wright array program------
    cout<<"With the help of for loop"<<endl;
    for (int i = 0; i <=6; i++)
    {
        marke[6]=100; /*<----- You can change the value of an array  'marke[6]=100' priviusly
         value of array is 10 now after apllaying that method array is 100;*/
        cout<<"The marke of "<<i<<" is "<<marke[i]<<endl;
    }
    cout<<endl;
    //  using 'WHILE'loop wright array program------
    cout<<"With the help of while loop"<<endl;
    while (i<7)
    {
        cout<<"The marke of "<<i<<" is "<<marke[i]<<endl;
        i++;
    }
    cout<<endl;
    // using 'DO-WHILE'loop wright array program------
    cout<<endl;
    cout<<"With the help of do-while loop"<<endl;
    do
    {
        cout<<"The marke of "<<i<<" is "<<marke[i]<<endl;
        i++;
    } while (i<=12);
    cout<<endl;
    // Tne pointer arrays
    int* p=marke;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    cout<<"The value of *(p+4) is "<<*(p+4)<<endl;
    cout<<"The value of *(p+5) is "<<*(p+5)<<endl;
    cout<<"The value of *(p+6) is "<<*(p+6)<<endl;
    cout<<"The value of *(p+7) is "<<*(p+7)<<endl;
    

    
    

return 0;
}