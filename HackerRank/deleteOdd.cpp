#include <list>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

list<int> deleteOdd(list<int> &lst)
{

    for (list<int>::iterator p = lst.begin(); p != lst.end();)
    {
        if (*p % 2 != 0)
        {
            p = lst.erase(p);
        }
        else
        {
            p++;
        }
    }
    return lst;
}

int main()
{
    list<int> lst, dlst;
    srand(34562);
    for (int i = 0; i < 30; ++i)
        lst.push_back(rand() % 100);
    (dlst = deleteOdd(lst)).sort();
    for (list<int>::iterator it = dlst.begin(); it != dlst.end(); ++it)
        cout << *it << ':';
    cout << endl;
    return 0;
}