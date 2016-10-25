#include <iostream>
#include <string>

// change 8 to 4, than print all the elements of the array

using namespace std;


int main() {
	int d[] = {1, 2, 3, 8, 5, 6};
	int a = (sizeof(d)/sizeof(*d));
	d [8] = 4;

	for (int i=0 ; i<= a; i++) {
			cout << d << endl;

  return 0;
}
}
