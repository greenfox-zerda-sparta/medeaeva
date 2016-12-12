
// In Your main function create an array of integers. 5 long.
// Fill it up with random numbers.
// For each number treat it as the radius of a circle.
// Calculate the circumference and the area of the circle with such a radius.
// Use preprocessor to define the MY_PI constant. Use this in the calculations.

#include <iostream>
#include <cstdlib>
using namespace std;

#define MY_PI 3.14f

int main() {
  srand (time(NULL));
  unsigned int MyArray[5];
  for (unsigned int i = 0; i < 5; ++i) {
    MyArray[i] = rand() % 10 + 1;
      cout << "Radius: " << MyArray[i] << " | " << "Circumference: " << 2 * MyArray[i] * MY_PI
           << " | " << "Area: " << MyArray[i] * MyArray[i] * MY_PI << endl;
  }
  return 0;
}
