#include <iostream>
#include <string>
  // Write a function that takes an array, its length and a number
  // and it returns the index of the given number in the array.
  // It should return -1 if did not find it. (linear search)

using namespace std;


int lins (int ar[], int arhossz, int b) {
	int index = (-1);
	for (int i = 0; i < arhossz; i++) {
		if (b == ar[i]) {
			index = index +1 + i;
		}
	}
	return index;
}

int main() {
  int numbers[] = {7, 5, 8, -1, 2};
  cout << "linear search: " << lins (numbers, 5, 8) << endl;
  return 0;
}


