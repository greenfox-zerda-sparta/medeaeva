#include <iostream>
#include <string>

using namespace std;

// The "other_high_number_pointer" should point to the same memory address
// without using the "&" operator.

int main() {
  int high_number = 6655;

  int *other_high_number_pointer;

  int *hight_number_pointer = &high_number;

  other_high_number_pointer = hight_number_pointer;

  cout << *other_high_number_pointer << endl;


  return 0;
}
