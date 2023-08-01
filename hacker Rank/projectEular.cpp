//Project Euler #1: Multiples of 3 and 5
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

//Project Euler #1: Multiples of 3 and 5
int main()
{
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            if (i % 3 == 0 || i % 5 == 0)
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}

