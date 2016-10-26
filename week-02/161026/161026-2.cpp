#include <iostream>
#include <string>
  // print the value of number using the "number_pointer"


using namespace std;



int main() {
	int number = 1234;
	int *number_pointer = &number;


	cout << "value of number using the number pointer " << *number_pointer << endl;

	  return 0;
	}
