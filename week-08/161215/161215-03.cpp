// Given a non-negative int n,
// return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6),
// while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).


#include <iostream>
#include <string>

using namespace std;

unsigned int sum_of_digits(unsigned int n);

int main() {

    unsigned int number;
    cout << "plz give me a number u wanna test!" << endl;
    cin >> number;
    cout << "The sum of all digits in "<< number << " is: " << sum_of_digits (number) << endl;
    return 0;
}


unsigned int sum_of_digits(unsigned int n) {
    if (n < 10) {
      return n;
    }
    else {
      return sum_of_digits(n/10) + n%10;
    }
}
