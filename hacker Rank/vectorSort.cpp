#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0;
    cin >> n;
    int i = 0;
    vector<int> v(n);
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    for (i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
