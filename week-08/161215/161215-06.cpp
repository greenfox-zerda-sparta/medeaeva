// We have reindeers standing in a line, numbered 1, 2, ... The odd reindeers
// (1, 3, ..) have the normal 2 antlers. The even reindeers (2, 4, ..) we'll say
// have 3 antlers, because they each have a raised branch (how funny they are, arent they?).
// Recursively return the number of "antlers" in the reindeer line 1, 2, ... n (without loops or
// multiplication).

#include <iostream>
#include <string>

using namespace std;

unsigned int antler_counter(unsigned int n);

int main() {
  unsigned int number_of_reindeers;
  cout << "plz give me how many reindeers are standing in a line!" << endl;
  cin >> number_of_reindeers;
  cout << "Than there are " << antler_counter(number_of_reindeers) << " antlers. (Yes, every second reindeer is a freak of nature.) "<< endl;
  return 0;
}

unsigned int antler_counter(unsigned int n) {
  n--;
  unsigned int antlers;
  if (n % 2 == 0) {
    antlers = 2;
  }
  else if (n % 2 == 1) {
    antlers = 3;
  }
  if (n == 0) {
    return antlers;
  }
  return antlers + antler_counter(n);
}
