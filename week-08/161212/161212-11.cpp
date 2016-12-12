// Create a function like macro that takes one argument.
// If the argument is false, it should print out the following:
// The expression in the argument. And the file name and the line in the file.


#include <iostream>

using namespace std;

#define MyFunction(a) if(!(a) ){std::cout << "expression in the argument: (" << #a << ") in:  " << __FILE__ << " at: " << __LINE__ << std::endl; for(;;);}


int main () {

  bool a = false;
  MyFunction(a);
  return 0;
}




