NEM JÓ, NEEDS WORK!

// write a function that takes a string and returns a map
// the map should have the letters of the string as keys and
// it should have integers as values that represents how many times the
// letter appeared int the string

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


map<string, int> modify(string a);

int main() {
  string a = "korcsolya";

  cout << "my string as map and number of letters: " << endl;
  modify(a);

  return 0;
}

map<string, int> modify(string a) {
  map<string, int> myMap;
  myMap[a] = a.size();
  map<string, int>::iterator it;
  for(it = myMap.begin(); it != myMap.end(); ++it) {
    cout << it->first << " " << it->second << endl;
  }
  return myMap;
}

