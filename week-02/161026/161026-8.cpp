#include <iostream>
#include <string>
  // Please fix the problem and swap the value of the variables,
  // without using the "high_number" and the "low_number" variables.

using namespace std;

int main() {
  int high_number = 2;
  int low_number = 6655;

  int* hight_number_pointer = &high_number;
  int* low_number_pointer = &low_number;


  int temp = *hight_number_pointer;
  *hight_number_pointer = *low_number_pointer;
  *low_number_pointer = temp;

	  cout << "high number: " << high_number << endl;
	  cout << "low number: " << low_number << endl;

  return 0;
}
