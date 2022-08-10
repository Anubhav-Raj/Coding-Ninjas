#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
 int main(){

    // Declaring a vector
    vector<int> v = { 1, 2, 3 };

    cout << "Without iterators = ";
     
    // Accessing the elements without using iterators
    for ( int j = 0; j < 3; ++j)
    {
        cout << v[j] << " ";
    }

      // Declaring an iterator
    vector<int>::iterator i;

    cout << "\nWith iterators = ";
     
     // Accessing the elements using iterators
    for (i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }

     // Adding one more element to vector
    v.push_back(4);
 
    cout << "\nWithout iterators = ";
     
    // Accessing the elements without using iterators
    for ( int j = 0; j < 4; ++j)
    {
        cout << v[j] << " ";
    }
 
    cout << "\nWith iterators = ";
     
    // Accessing the elements using iterators
    for (i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }
 
  return 0;
}