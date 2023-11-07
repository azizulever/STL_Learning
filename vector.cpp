#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // basic declaration syntax
    vector<int> a(4); //vector declaration with fixed size
    vector<int> x(4,2); //vector declaration as fixed size and initialize with 1 (like this: 2 2 2 2)

    for (int i = 0; i < 5; i++) // taking input
    {
        int n; cin >> n;
        v.push_back(n); //insert data or elements at the end of the vector
    }

    // cout << "Capacity: " << v.capacity() << endl; //checking capacity of declared vector
    v.pop_back(); //this will poped last element

    for (int i = 0; i < v.size(); i++) // printing output
    {
        cout << v[i] << " ";
    }

    v.clear(); //this can completely empty the element of declared vector
}