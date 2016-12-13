 // Print the first 5 elements of the vector using iterators

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }

  vector<int>::iterator it;
  it = v.begin();

  cout << "the first element of the vector using iterator:" << endl;
  cout << *it << endl;


  cout << "the first 5 elements of the vector using iterators:" << endl;
  for (it = v.begin(); it != v.begin() + 5; ++it) {
    cout << *it << endl;
  }


  return 0;
}
