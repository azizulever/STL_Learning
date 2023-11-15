/*Sets are a type of associative container in which each element has to be unique
because the value of the element identifies it. The values are stored in a specific sorted order
i.e. either ascending or descending.*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    // ascending order
    set<int> s; // declaration syntax

    s.insert(6);
    s.insert(7);
    s.insert(7);
    s.insert(2);
    s.insert(5);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "10 is present of not: " << s.count(6) << endl; // will return boolean value


    // descending order
    set<int, greater<int>> greater_s; // declaration syntax

    greater_s.insert(6);
    greater_s.insert(7);
    greater_s.insert(7);
    greater_s.insert(2);
    greater_s.insert(5);

    for (auto i : greater_s)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "10 is present of not: " << greater_s.count(10) << endl; // will return boolean value
}