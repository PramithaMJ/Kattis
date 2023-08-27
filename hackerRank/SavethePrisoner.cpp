
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, s;
        cin >> n >> m >> s;
        int ans = (m + s - 1) % n;
        if (ans == 0)
            ans = n;
        cout << ans << endl;
    }
    return 0;
}
