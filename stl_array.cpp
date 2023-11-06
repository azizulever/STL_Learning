#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> ar; //declaration syntax

    for (int i = 0; i < ar.size(); i++) //taking input
    {
        cin >> ar[i];                   
    }

    cout << "Element at 2nd index: " << ar.at(2) << endl; //printing element 2nd index
    cout << "is empty? : " << ar.empty() << endl; //checking the array is empty or not (Boolean) 
    cout << "Fist element: " << ar.front() << endl; //printing first element
    cout << "Fist element: " << ar.back() << endl; //printing last element

    for (int i = 0; i < ar.size(); i++) //printing output
    {
        cout << ar[i] << " ";
    }

    return 0;
}