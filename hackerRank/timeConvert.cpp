#include <bits/stdc++.h>

#include <string>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    
        string hour = s.substr(0,2);
        string min = s.substr(3,2);
        string sec = s.substr(6,2);
        string ampm = s.substr(8,2);
        int h = stoi(hour);
        if(ampm == "PM" && h != 12){
            h += 12;
            hour = to_string(h);
        }
        if(ampm == "AM" && h == 12){
            hour = "00";
        }
        return hour + ":" + min + ":" + sec;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
