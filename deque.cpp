/* Double-ended queues are a special case of queues where insertion and deletion operations are
possible at both the ends.*/
#include <iostream>
#include <deque>
using namespace std;

int main()
{

    deque<int> d; // deque basic declaration

    d.push_back(5);
    d.push_front(10);
    d.push_back(2);
    d.push_back(3);

    d.erase(d.begin());   // erase the fist element
    cout << d.max_size(); // returns the maximum number of elements that a deque container can hold

    return 0;
}