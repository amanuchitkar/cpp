#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1;
    list1.push_back(7);
    list1.push_front(9);
    list1.push_back(9);
    list1.push_back(1);
    list1.push_back(4);
    list1.push_back(18);
    list1.push_back(16);

    display(list1);
    // Removing element from list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9);

    // Reversing the list
    // list1.reverse();

    // sorting elements
    list1.sort();

    display(list1);

    list<int> list2(3);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 5;
    iter++;
    *iter = 97;
    iter++;
    *iter = 86;
    iter++;
    display(list2);


    list1.merge(list2);
    cout<<"After mergeing: ";
    display(list1);
    
    return 0;
}