#include<iostream>

using namespace std;
// this away is not efficient

int mp_r(int n){
    if (n=0|| n== 1)
    {
        return 1;
    }
    if (n==2)
    {
        return 2;
    }else{
        return mp_r(n-1)+ mp_r(n-2) + mp_r(n-3);
    }
    
    
}

int main(){
    int n;
    cin>>n;
    cout<<mp_r(n)<<endl;
}