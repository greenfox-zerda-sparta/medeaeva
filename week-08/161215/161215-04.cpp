// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).


#include <iostream>
#include <string>

using namespace std;

unsigned int powerN(unsigned int x, unsigned int n);

int main() {
  unsigned int base, power;
  cout << "plz give me a number as base!" << endl;
  cin >> base;
  cout << "Thx, now plz give me a number as power!" << endl;
  cin >> power;
  cout << "The value of " << base << " to the " << power << " is: " << powerN(base, power) << endl;
  return 0;
}


unsigned int powerN(unsigned int x, unsigned int n) {
  if (n == 0) {
    return 1;
  }
  else {
    return x * powerN(x, --n);
  }
}
