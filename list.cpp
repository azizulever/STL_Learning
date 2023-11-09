// List manages its elements as a doubly linked list.

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l; // syntax

    l.push_back(6);
    l.push_front(9); // push element in front
    l.push_back(15);

    for (int i : l) // printing output
    {
        cout << i << " ";
    }
}