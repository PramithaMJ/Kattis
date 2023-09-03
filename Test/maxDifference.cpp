#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'maxDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY px as parameter.
 */

int maxDifference(vector<int> px) {
    int max = 0;
    for(int i = 0; i < px.size(); i++){
        for(int j = i+1; j < px.size(); j++){
            if(px[j] - px[i] > max){
                max = px[j] - px[i];
            }
        }
    }
    if(max == 0){
        return -1;
    }
    else
        return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string px_count_temp;
    getline(cin, px_count_temp);

    int px_count = stoi(ltrim(rtrim(px_count_temp)));

    vector<int> px(px_count);

    for (int i = 0; i < px_count; i++) {
        string px_item_temp;
        getline(cin, px_item_temp);

        int px_item = stoi(ltrim(rtrim(px_item_temp)));

        px[i] = px_item;
    }

    int result = maxDifference(px);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
