#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Problem A Finding An A
    // Output the suffix of that begins with the first occurrence of the letter a.
    // If the string does not contain the letter a, output the string nothing.
    string name;
    getline(cin, name);
    int index = name.find('a');

    if (index == -1)
    {
        cout << "nothing" << endl;
    }
    else
    {
        cout << name.substr(index) << endl;
    }
    return 0;
}