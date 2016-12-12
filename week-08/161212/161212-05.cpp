// Define a function like macro that prints out the parameter it gets,
// and adds this string before it "DEBUG: " if __DEBUG is defined.
// Otherwise adds "RELEASE: " before the string.
// Use try it out. Illustrate that it works.

#include <iostream>

#if defined __DEBUG
#define parameter(a) std::cout << "DEBUG: " <<  a
#else
#define parameter(a) std::cout << "RELEASE: " << a
#endif


int main() {

  int pm = 100;

  parameter(pm);

  return 0;
}
