#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    int x, y, z;
    char a, b, c;

    cin >> x >> y >> z;

    vector<int> arr;

    arr.push_back(x);
    arr.push_back(y);
    arr.push_back(z);

    sort(arr.begin(), arr.end());

    unordered_map<char, int> map;

    map['A'] = arr[0];
    map['B'] = arr[1];
    map['C'] = arr[2];

    cin >> a >> b >> c;

    cout << map[a] << " " << map[b] << " " << map[c] << endl;
    return 0;
}