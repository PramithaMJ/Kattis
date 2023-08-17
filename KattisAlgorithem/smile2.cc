#include <iostream>
#include <string>

using namespace std;



int main() {
    string line;
    getline(cin, line);

    int N= line.size();
    int count=0;
   
    for (int i=0;i<N-1;i++) {
        if((line[i]==':')||(line[i]==';')){
             if (line[i+ 1] == ')') {
                    cout<<i<<endl;
               }
               else if (line[i + 1] == '-') {
                   if(i<N-2){
                        if( line[i + 2] == ')'){
                            cout<<i<<endl;
                        }
                   }
                    
                }
        }
            
    }
}