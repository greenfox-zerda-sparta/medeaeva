#include <iostream>
#include <string>
  // print the memory address of the variable

using namespace std;

int main() {
  int number = 1234;
  cout << "memory address of the variable " << &number << endl;

  return 0;
}
