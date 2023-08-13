#include<iostream>
#include <algorithm>
#include<vector>
#include <numeric> //For accumulate operation
using namespace std;

/*
1.  sort(first_iterator, last_iterator) – To sort the given vector.
2.  sort(first_iterator, last_iterator, greater<int>()) – To sort the given container/vector in descending order
3.  reverse(first_iterator, last_iterator) – To reverse a vector. ( if ascending -> descending  OR  if descending -> ascending)
4.  *max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
5.  *min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
6.  accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements
7.  bfind(first_iterator, last_iterator, x) – Returns an iterator to the first occurrence of x in vector and 
    points to last address of vector ((name_of_vector).end()) if element is not present in vector.
8.  binary_search(first_iterator, last_iterator, x) – Tests whether x exists in sorted vector or not.
9.  lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element
    in the range [first,last) which has a value not less than ‘x’.
10. upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element 
    in the range [first,last) which has a value greater than ‘x’. 
*/


int main(){
  // Initializing vector with array values
    int arr[] = {10, 20, 5, 23 ,42 , 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
 
    cout << "Vector is: ";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
 
    // Sorting the Vector in Ascending order
    sort(vect.begin(), vect.end());
 
   
    cout << "\nVector after sorting is: ";
    for (int i=0; i<n; i++)
       cout << vect[i] << " ";
 
   
      // Sorting the Vector in Descending order
      sort(vect.begin(),vect.end(), greater<int>());
   
    cout << "\nVector after sorting in Descending order is: ";
    for (int i=0; i<n; i++)
       cout << vect[i] << " ";
   
   
    // Reversing the Vector (descending to ascending , ascending to descending)
    reverse(vect.begin(), vect.end());
 
    cout << "\nVector after reversing is: ";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
 
    cout << "\nMaximum element of vector is: ";
    cout << *max_element(vect.begin(), vect.end());
 
    cout << "\nMinimum element of vector is: ";
    cout << *min_element(vect.begin(), vect.end());
 
    // Starting the summation from 0
    cout << "\nThe summation of vector elements is: ";
    cout << accumulate(vect.begin(), vect.end(), 0);

    cout << "Occurrences of 20 in vector : ";
 
    // Counts the occurrences of 20 from 1st to
    // last element
    cout << count(vect.begin(), vect.end(), 20);
 
    // find() returns iterator to last address if
    // element not present
    find(vect.begin(), vect.end(),5) != vect.end()?
                         cout << "\nElement found":
                     cout << "\nElement not found";

    // Sort the array to make sure that lower_bound()
    // and upper_bound() work.
    sort(vect.begin(), vect.end());
 
    // Returns the first occurrence of 20
    auto q = lower_bound(vect.begin(), vect.end(), 20);
 
    // Returns the last occurrence of 20
    auto p = upper_bound(vect.begin(), vect.end(), 20);
 
    cout << "The lower bound is at position: ";
    cout << q-vect.begin() << endl;
 
    cout << "The upper bound is at position: ";
    cout << p-vect.begin() << endl;

    
 return 0;
}