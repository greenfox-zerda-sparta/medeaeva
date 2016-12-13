// Write a simple program that creates secret santa pairs
// It should read names till the character q is typed to the standard output,
// than it should print the names as secret santa pairs like:
// Clair - Mike
// Joe - Ron
// Cloe - Clair
// Ron - Cloe
// Mike - Joe

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

void fillVector(vector<string>& _myVector);

bool is_pairing_possible(int _elements);

int main() {

  vector<string> myVector;
  fillVector(myVector);
  is_pairing_possible(myVector.size());
  if (is_pairing_possible == false) {
    string name;
    cin >> name;
    myVector.push_back(name);
  }
  random_shuffle(myVector.begin(), myVector.end());


  int elements = myVector.size();
  cout << "Secret Santa circle:" << endl;
  for (int n = 0; n < elements; ++n) {
         cout << myVector.at(n) << " - " << myVector.at(n + 1) << endl;;
     }


  return 0;
}

void fillVector(vector<string>& _myVector) {
  cout << "Type in names you wanna pair up. Plz type in q to stop." << endl;
  string name;
  cin >> name;
  while (name != "q") {
    _myVector.push_back(name);
    cin >> name;
  }
}

bool is_pairing_possible(int _elements) {
  int remainder = _elements % 2;
  if (remainder == 1) {
    cout << "We need one more name to do the pairing. Start typin'" << endl;
    return false;
  }
  else {
    cout << "Thanks for input!" << endl;
    return true;
  }
}

