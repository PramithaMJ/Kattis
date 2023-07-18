#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;

    int N = s.size();
    int count = 0;

    for(int i =0 ; i<N; i++){
        char ch = tolower(s[i]);

        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
            count++;
        }
    }
    cout<<count;

}