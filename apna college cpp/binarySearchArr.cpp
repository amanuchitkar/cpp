#include <iostream>
using namespace std;
int binarySearchArr(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = ((s + e) / 2);
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid]> key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
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
    cout << binarySearchArr(arr, n, key)<<endl;
    return 0;
}