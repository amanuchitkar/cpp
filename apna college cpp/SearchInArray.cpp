#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key)
{
    for (int  i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
        
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter array number: ";
    cin >> n;
    cout << "Enter array value." << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value to find in array: ";
    int key;
    cin >> key;
    cout << linearSearch(arr, n ,key)<<endl;
    return 0;
}