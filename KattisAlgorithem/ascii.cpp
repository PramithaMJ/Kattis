#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Top side of the square
    cout << '+';
    for (int i = 0; i < n; ++i) {
        cout << '-';
    }
    cout << '+' << endl;

    // Sides of the square
    for (int i = 0; i < n; ++i) {
        cout << '|';
        for (int j = 0; j < n; ++j) {
            cout << ' ';
        }
        cout << '|' << endl;
    }

    // Bottom side of the square
    cout << '+';
    for (int i = 0; i < n; ++i) {
        cout << '-';
    }
    cout << '+' << endl;

    return 0;
}
