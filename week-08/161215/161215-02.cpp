#include <iostream>
#include <string>

using namespace std;

unsigned int countup (unsigned int n);

unsigned int countup_recursion (unsigned int number);

int main () {
  unsigned int _number;
  cout << "plz give me a number u wanna test!" << endl;
  cin >> _number;
  countup_recursion(_number);
  return 0;
}

unsigned int countup (unsigned int n) {
  return n+1;
}

unsigned int countup_recursion (unsigned int number) {
  unsigned int start = 1;
  while (start < = number) {
  start = countup(start);
   cout << start << endl;
  }
  return number;
}
