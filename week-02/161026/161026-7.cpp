#include <iostream>
#include <string>

using namespace std;

// Please fix the problem and swap where the pointers point,
// without using the "&" operator.



int main() {
  int high_number = 6655;
  int low_number = 2;

  void swapNumbers (int high_number, int low_number) {
  	int temp = *high_number;
  	*high_humber = *low_number;
  	*low_number = temp;
  }

  int *high_number_pointer;
  int *low_number_pointer;


  int *high_number_pointer = &low_number;
  int *low_number_pointer = &high_number;


  cout << *high_number_pointer << endl;
  cout << *low_number_pointer << endl;

  return 0;
}
