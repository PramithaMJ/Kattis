#include <iostream>
#include <string>

using namespace std;

int main()
{
    //getline() read the whitespace but string cion end terminate the white space
    // cout << "Please enter your full name: ";
    // char fullName[1024];
    // cin.getline(fullName, 1024);
    // cout << "\nThank you, " << fullName << endl;
    
    string name;
    getline(cin, name);
    cout << "\nThank you, " << name << endl;
    return 0;
}