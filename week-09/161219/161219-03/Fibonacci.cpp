#include "Fibonacci.h"

Fibonacci::Fibonacci() {}

Fibonacci::~Fibonacci() {}

int Fibonacci::Fibonacci_index(int index) {
  if(index < 0) {
    throw "wrong index";
  }
  if(index == 0) {
     return 0;
  }
  if (index == 1) {
     return 1;
  }
  else {
  return Fibonacci_index (index - 2) + Fibonacci_index(index - 1);
  }
}
