#include <iostream>
#include <string>
  // Write a function that takes an array and its length returns the minimal element
  // in the array (your own min function)

using namespace std;


int min (int ar[], int arhossz) {
	int m = ar[0];
	for (int i = 1; i < arhossz; i++) {
		if (ar[i] < m){
			m = ar[i];
		}
	}
	return m;
}

int main() {
  int numbers[] = {7, 5, 8, -1, 2};

  int hossz = sizeof(numbers)/sizeof(int);
  cout << "Smallest number: " << min(numbers, hossz) << endl;
  return 0;
}


