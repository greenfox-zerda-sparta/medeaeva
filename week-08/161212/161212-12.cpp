#include <iostream>

using namespace std;

#if defined __DEBUG
#define MyFunction(a) if (!a) cout << "expression in the argument: " << a << ", in: " << __FILE__ << ", at: " << __LINE__ << endl;
#else
#define MyFunction(a)
#endif

int main() {
  bool arg = false;
  MyFunction(arg);

  return 0;
}
