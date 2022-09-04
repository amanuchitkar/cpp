#include<iostream>
using namespace std;
int main(){
     /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop*/
    //    --------- for loop in c++-----------
    cout<<"------------------for loop in c++-----------\n";
    int i=1;
    // for(int i=0;i<10;i++){
    //     cout<<i<<endl;
    // }
    for (int i = 1; i <=6; i++)
    {
        cout<<i<<endl;
    } 
    cout<<endl;





    /*-----------While loop in C++--------------*/
    cout<<"------------while loop in c++-----------"<<endl;
    while (i<=7)
    {
        cout<<i<<endl;
        ++i;
    }




    
    cout<<endl;
         /*---------do-While loop in C++--------------*/
         cout<<"------------do-while loop in c++-----------"<<endl;
         do
         {
            cout<<i<<endl;
            i++;
         } while (i<=10);
         
    
    

    
    
    return 0;
}