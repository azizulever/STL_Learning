#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s; // declaration syntax

    s.push("Oh! ");
    s.push("No! ");
    s.push("Shit! ");

    cout << s.top() << endl; // this will print "Shit!" because stact is LIFO
    cout << s.size() << endl;

    return 0;
}