#include <iostream>
#include <string>
  // update the value of number variable to 42 using the "number_pointer"


using namespace std;



int main() {
	int number = 1234;
	int *number_pointer = &number;
	*number_pointer = 42;

	cout << "value of number using the number pointer " << *number_pointer << endl;

	return 0;
	}
