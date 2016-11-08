#include <iostream>
#include <string>
#include "Pirate.h"

using namespace std;

Pirate::Pirate(string name, int num_of_rum) {
  this->name = name;
  this->num_of_rum = num_of_rum;
}

int Pirate::drink_rum(int added_num_of_rum) {
  return num_of_rum += added_num_of_rum;
}

//int Pirate::sum_of_rum() {
//  return num_of_rum;
//}

string Pirate::hows_goin_mate() {
  if (num_of_rum >= 5) {
    return "Arrrr!";
  }
  else {
    return "Nothin'";
  }
}
