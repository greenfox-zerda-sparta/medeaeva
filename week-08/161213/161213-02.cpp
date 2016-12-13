// create a function that prints a vector using iterators

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

  cout << "all elements of the vector using iterators:" << endl;
  for (it = v.begin(); it != v.end(); ++it) {
    cout << *it << endl;
  }


  return 0;
}
