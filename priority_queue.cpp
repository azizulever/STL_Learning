/*Priority queue is a type of container adapter, specifically designed such that
the first element of the queue is either the greatest or the smallest of all
elements in the queue.
In simple terms, STL Priority Queue is the implementation of Heap Data Structure.*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // for max heap
    priority_queue<int> pq; // declaration syntax

    pq.push(6);
    pq.push(8);
    pq.push(3);
    pq.push(5);

    int size = pq.size();
    for (int i = 0; i < size; i++)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;


    // for min heap
    priority_queue<int, vector<int>, greater<int>> min_pq; // declaration syntax

    min_pq.push(6);
    min_pq.push(8);
    min_pq.push(3);
    min_pq.push(5);

    size = min_pq.size();
    for (int i = 0; i < size; i++)
    {
        cout << min_pq.top() << " ";
        min_pq.pop();
    }
    cout << endl;
}