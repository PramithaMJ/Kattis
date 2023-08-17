
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <set>

using namespace std;

int main() {

    string line;
    getline(cin, line);
    istringstream iss(line);

    vector<string> word{istream_iterator<string>{iss}, istream_iterator<string>{}};
    set<string> s;

    for (auto& words : word) {
        if (s.find(words) != s.end()) {
            cout << "no";
            return 0;
        }
        s.insert(words);
    }

    cout << "yes";
    
    return 0;
}
