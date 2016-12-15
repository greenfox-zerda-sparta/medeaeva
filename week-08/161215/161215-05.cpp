// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies
// recursively (without loops or multiplication).


#include <iostream>
#include <string>

using namespace std;

unsigned int bunnies_floppy_ears(unsigned int number_of_bunnies);

int main() {
  unsigned int number;
  cout << "plz give me how many bunnies are on the meadow!" << endl;
  cin >> number;
  cout << "Than there are " << bunnies_floppy_ears(number) << " floppy bunny ears. "<< endl;
  return 0;
}

unsigned int bunnies_floppy_ears(unsigned int number_of_bunnies) {
  number_of_bunnies --;
  int ears = 2;
  if (number_of_bunnies == 0) {
    return 0;
  }
  return ears + bunnies_floppy_ears(number_of_bunnies);
}
