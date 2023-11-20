/*Maps are associative containers that store elements in a mapped fashion.
Each element has a key value and a mapped value.
No two mapped values can have the same key values.*/

#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int, string> m; //declaration syntax

    m[6] = "Oh no!"; //insertion
    m[8] = "Shit!";
    m[1] = "Okay!";

    m.insert({10, "Ow Wow!"}); //insertion another syntax

    for(auto i:m) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}