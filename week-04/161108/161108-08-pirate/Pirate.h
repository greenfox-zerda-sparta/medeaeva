#include <iostream>
#include <string>

#ifndef PIRATE_H_
#define PIRATE_H_

using namespace std;

class Pirate {
public:
  Pirate (string name, int num_of_rum);
  string name;
  int num_of_rum;
//  int sum_of_rum;
  int drink_rum(int added_num_of_rum);
  string hows_goin_mate();
};

#endif /* PIRATE_H_ */
