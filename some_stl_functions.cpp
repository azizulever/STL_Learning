#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(9);
    v.push_back(1);
    v.push_back(7);

    int sz = v.size();        // vector size
    sort(v.begin(), v.end()); // sort, Time complexity-> O(NlogN)

    cout << binary_search(v.begin(), v.end(), 3) << endl; // binary search stl, Time Complexity O(logN)
}