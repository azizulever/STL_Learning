#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q; // declaration syntax

    q.push("Oh no! ");
    q.push("Shit! ");

    cout << q.front() << endl; // this will print "Oh no!", because queue is FIFO
    cout << q.size() << endl;

    return 0;
}