// The fibonacci sequence is a famous bit of mathematics, and it happens to
// have a recursive definition. The first two values in the sequence are
// 0 and 1 (essentially 2 base cases). Each subsequent value is the sum of the
// previous two values, so the whole sequence is: 0, 1, 1, 2, 3, 5, 8, 13, 21
// and so on. Define a recursive fibonacci(n) method that returns the nth
// fibonacci number, with n=0 representing the start of the sequence.

#include <iostream>
#include <string>

using namespace std;

unsigned int fibonacci(unsigned int n);

int main() {
  unsigned int sequence;
  cout << "plz give me how many sequences u want in a Fibonacci sequence!" << endl;
  cin >> sequence;
  cout << "Than here is the Fibonacci sequence u wanted: " << fibonacci(sequence);
  return 0;
}

unsigned int fibonacci(unsigned int n) {
  if (n == 0) {
    return 0;
  }
  else if (n == 1) {
    return 1;
  }
  else {
    return fibonacci(n-1) + fibonacci(n-2);
  }
}
