#include <iostream>
#include <string>
// Please double all the elements, than print all of them

using namespace std;

int main() {
	int f[] = {3, 4, 5, 6, 7};

		for (int i = 0; i < (sizeof(f)/sizeof(int)); i++) {
			f[i] = f[i] * 2;
			cout << f[i] << endl;
	}
  return 0;
}
