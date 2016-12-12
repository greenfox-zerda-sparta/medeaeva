
// Define 3 constants using a macro directive.
// One integer, one float and one string of characters.
// Print them out to the console in Your main funciton.
//

#include <iostream>
#define  int_replacement 1
#define  float_replacement 1.2
#define  char_replacement "a"

using namespace std;

int main () {

  cout << int_replacement << endl;
  cout << float_replacement << endl;
  cout << char_replacement << endl;
  return 0;
}


#define identifier replacement
