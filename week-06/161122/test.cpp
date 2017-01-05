#include <iostream>
#include <string>

using namespace std;

unsigned int collatz (unsigned int n);

int main () {
  unsigned int number;
  cout << "plz give me a number u wanna test!" << endl;
  cin >> number;

  collatz(number);

  return 0;
}

unsigned int collatz (unsigned int n){
  if (n == 1) {
    return 1;
  }
  else if (n % 2 == 0) {
    return collatz(n / 2);
  }
  else {
    return collatz(3*n + 1);
  }
}
