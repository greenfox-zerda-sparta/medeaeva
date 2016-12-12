// Create a constant using a prepocesor directive.
// Print it out to the console.
// Undefine it. And then redefine it with a new value.
// Print it out again.

#include <iostream>
#define MyConstant 100

using namespace std;

int main () {
  cout << MyConstant << endl;

#undef MyConstant

#define MyConstant 200

  cout << MyConstant << endl;

  return 0;

}
