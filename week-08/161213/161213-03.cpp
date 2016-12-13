  // Print all the keys and values of the map
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
  map<string, int> m;
  m["one"] = 1;
  m["two"] = 2;
  m["three"] = 3;
  m["four"] = 4;
  m["five"] = 5;

  map<string, int>::iterator it;

  for (it = m.begin(); it != m.end(); ++it) {
    cout << it->first << " " << it->second << endl;
  }

  return 0;
}
