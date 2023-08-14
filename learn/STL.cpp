#include <iostream>
#include <vector>
#include <algorithm>
#include<set>

using namespace std;

bool f(int x, int y)
{
    return x > y;
}

void setDemo(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);

    for(int x :s){
        cout<<x<<" ";
    }

}

int main()
{

    vector<int> A = {1, 45, 23, 48, 12, 65, 37};
    cout << A[1] << endl;
    sort(A.begin(), A.end());

    // print vector
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }

    bool present = binary_search(A.begin(), A.end(), 45); // true
    present = binary_search(A.begin(), A.end(), 4);       // false
    cout << endl;
    cout << present << endl;

    A.push_back(42);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);

    vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);  // >=
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100); // >

    // same as about wo satatement

    auto it11 = lower_bound(A.begin(), A.end(), 100);  // >=
    auto it12 = upper_bound(A.begin(), A.end(), 100); // >

    cout << *it << " " << *it2 << endl;
    cout << it2 - it << endl; // 4

    sort(A.begin(), A.end(), f);

    vector<int>::iterator it3;

    for (it3 = A.begin(); it3 != A.end(); it3++)
    {
        cout << *it3 << " ";
    }
    cout << endl;

    for (int &x : A) //reference
    {
        x++;
        cout << x << " ";
    }
    cout << endl;

    return 0;
}