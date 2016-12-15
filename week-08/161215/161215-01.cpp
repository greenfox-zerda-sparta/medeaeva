// write a recursive function
// that takes one parameter: n
// and counts down from n


#include <iostream>
#include <string>

using namespace std;

unsigned int countdown (unsigned int n);

unsigned int countdown_recursion (unsigned int number);

int main () {
  unsigned int _number;
  cout << "plz give me a number u wanna test!" << endl;
  cin >> _number;
  countdown_recursion(_number);
  return 0;
}

unsigned int countdown (unsigned int n) {
  return n-1;
}

unsigned int countdown_recursion (unsigned int number) {
  while (number > 1) {
  number = countdown(number);
   cout << number << endl;
  }
  return number;
}

