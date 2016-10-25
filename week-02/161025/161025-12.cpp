#include <iostream>
#include <string>
  // write your own sum function
  // it should take an array and it's length


using namespace std;

int hossz = (sizeof(int)/sizeof(int[7]));

int sum (int a[], int hossz) {
	int sz = 0;
	for (int i = 0; i < hossz; i++) {
		sz = sz + a[i];
	}
	return sz;
}

int main() {
  int numbers[] = {4, 5, 6, 7, 8, 9, 10};
  cout << "összeg: " << sum(numbers, 7) << endl;
  return 0;
}
