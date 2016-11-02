  // Please allocate a 5 long array and fill it with numbers from 0 to 4, then print the whole array
  // Please delete the array before the program exits

#include <iostream>
#include <string>

using namespace std;

int* create_array () {
int* arr = new int[5];
for (int i = 0; i < 5; i++) {
	  arr[i] = i;
    }
  return arr;
}

int main() {
  int* array = create_array ();

  cout << "The first array: " << endl;

  for (int i = 0; i < 5; i++)
    cout << array[i] << endl;

  delete[] array;

  cout << endl << "After delete the array: " << endl;

  for (int i = 0; i < 5; i++)
    cout << array[i] << endl;

  return 0;
}
