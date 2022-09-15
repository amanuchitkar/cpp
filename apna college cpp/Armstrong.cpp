#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int num;
  cout << "Enter a intiger number for check: ";
  cin >> num;
  int result = 0;
  int originalnum = num;
  while (originalnum > 0)
  {
    // remainder contains the last digit
    int remainder = originalnum % 10;
    result += round(pow(remainder, 3));
    // removing last digit from the orignal number
    originalnum /= 10;
  }

  if (result == num)
  {
    cout << num << " is Armstrong Number" << endl;
  }
  else
  {
    cout << num << " is Non-Armstong Number" << endl;
  }

  // int p;
  // p=pow(4,2);
  // cout<<p;
  // return 0;
}