#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[8][n + 1];
    // set array value to zero
    memset(arr, 0, sizeof(arr));
    arr[7][0] = 1;

    for (int i =1; i <= n; i++)
    {
        arr[0][i] += arr[7][i - 1];

        arr[1][i] += arr[6][i - 1];
        arr[2][i] += arr[5][i - 1];

        arr[3][i] += arr[7][i - 1];
        arr[3][i] += arr[4][i - 1];

        arr[4][i] += arr[3][i - 1];
        arr[5][i] += arr[2][i - 1];

        arr[6][i] += arr[7][i - 1];
        arr[6][i] += arr[1][i - 1];
        
        arr[7][i] += arr[0][i - 1];
        arr[7][i] += arr[3][i - 1];
        arr[7][i] += arr[6][i - 1];
    }
    cout << arr[7][n] << endl;
    return 0;
}