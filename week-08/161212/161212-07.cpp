
// Create a function like macro, that get's one parameter.
// This macro should print out that parameter using cout.
// Illustrate that it works in Your main function.

#include <iostream>

using namespace std;

#define parameter(pm) cout << pm

int main() {

  parameter(1);

  return 0;

}
