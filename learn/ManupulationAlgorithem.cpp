// Some Manipulating Algorithms
/*
1.  arr.er1ase(position to be deleted) – 
    This erases selected element in vector and shifts and resizes the vector elements accordingly.
2.  arr.erase(unique(arr.begin(),arr.end()),arr.end()) – 
    This erases the duplicate occurrences in sorted vector in a single line.
3.  next_permutation(first_iterator, last_iterator) – This modified the vector to its next permutation
4.  prev_permutation(first_iterator, last_iterator) – This modified the vector to its previous permutation.
5.  distance(first_iterator,desired_position) – It returns the distance of desired position from the first iterator.
    This function is very useful while finding the index. 
*/


#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){

// Initializing vector with array values
    int arr[] = { 5, 10, 15, 20, 20, 23, 42, 45 };
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + n);
 
    cout << "Given Vector is:\n";
    for (int i = 0; i < n; i++)
        cout << vect[i] << " ";
 
    vect.erase(find(vect.begin(),vect.end(),10));
    cout << "\nVector after erasing element:\n";
    for (int i = 0; i < vect.size(); i++)
        cout << vect[i] << " ";
 
    vect.erase(unique(vect.begin(), vect.end()),
               vect.end());
    cout << "\nVector after removing duplicates:\n";
    for (int i = 0; i < vect.size(); i++)
        cout << vect[i] << " ";

         cout << "Given Vector is:\n";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
 
    // modifies vector to its next permutation order
    next_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing next permutation:\n";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
 
    prev_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing prev permutation:\n";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
 
  // Return distance of first to maximum element
    cout << "Distance between first to max element: ";
    cout << distance(vect.begin(),
                     max_element(vect.begin(), vect.end()));
    return 0;
}
