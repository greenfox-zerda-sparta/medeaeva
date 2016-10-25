#include <iostream>
#include <string>
	// print the sum of all numbers in h

using namespace std;

int main() {
  int h[] = {3, 4, 5, 6, 7};
  int elso = 0;
  for (int i = 0; i < (sizeof(h)/sizeof(int)); i++){
	  elso = elso + h[i];
  }
  cout << elso << endl;
  return 0;
}
