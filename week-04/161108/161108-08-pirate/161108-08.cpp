    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise
#include <iostream>
#include <string>
#include "Pirate.h"

using namespace std;

int main() {
  Pirate po("Jack", 2);
  po.drink_rum(4);

  cout << "What pirate "<< po.name << " says: " << po.hows_goin_mate() << endl;
  return 0;
}



