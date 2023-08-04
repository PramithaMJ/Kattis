#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> m;
    string s;
    while (cin >> s)
    {
        m[s[0]]++;
    }

    int strength = 0;
    for (auto i : m)
    {
        strength = max(strength, i.second);
    }

    cout << strength << endl;
}