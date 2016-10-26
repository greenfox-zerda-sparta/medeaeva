#include <iostream>
#include <string>
  // The "number_pointer" should point to the first element of the array called "numbers",
  // than please print its value with it.

using namespace std;



int main() {
	int numbers[] = {5, 6, 7, 8, 9};
	int *number_pointer;

	number_pointer = numbers;


	cout << "value of number using the number pointer " << *number_pointer << endl;

	return 0;
	}
