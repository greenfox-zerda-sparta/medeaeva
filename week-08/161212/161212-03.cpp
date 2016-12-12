// Create a constant using preprocessor directives.
// Make it so, that depending on the existence of a defined variable
// it's value is different.
// Write a main function that writes it to the console.
// Experiment in Your IDE compiling it with the directive defined or not.
// (This is waht we used -D __DEBUG for example. You can try this and see how it works
// when You compile a Debug version and a Release version.)

#include <iostream>
#define MyConstant 100


using namespace std;

int main () {
  cout << MyConstant << endl;

/* Erre a kódrészletre, mivel a 100 > 200 nem igaz, a cout sorban (22) hibát jelez!
#if MyConstant > 200
#undef MyConstant

  cout << MyConstant << endl;
*/

#if MyConstant < 200
#undef MyConstant

 // cout << MyConstant << endl;

#define MyConstant 101

  cout << MyConstant << endl;

#elif MyConstant < 200
#undef MyConstant

  cout << MyConstant << endl;

#endif

  return 0;

}
