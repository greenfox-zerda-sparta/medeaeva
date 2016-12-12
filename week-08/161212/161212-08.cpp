// Create a function like macro, that gets an expression as it's input.
// If the expression is false, it should print out some error message.

#include <iostream>

using namespace std;

#define if_false(expression) if (!expression) cout << "ERROR" << endl


int main() {
  bool otthon = 1;
  bool itthon = 0;
  if_false(otthon);
  if_false(itthon);

  return 0;
}
