#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> findSmiles(const string& line) {
    vector<int> addresses;
    int address = 0;

    for (char c : line) {
        if (c == ':' || c == ';') {
           
            if (line[address + 1] == '-' || line[address + 1] == ')') {
                if (line[address + 2] == '-' || line[address + 2] == ')') {
                   
                    addresses.push_back(address);
                }
            }
        }
        address++;
    }

    return addresses;
}

int main() {
    string line;
    getline(cin, line);

    vector<int> addresses = findSmiles(line);

   
    for (int address : addresses) {
        cout << address << " ";
    }
    cout << endl;

    return 0;
}
