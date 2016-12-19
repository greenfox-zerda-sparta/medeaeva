/*
 * FilledVector.cpp
 *
 *  Created on: 2016.12.19.
 *      Author: medeaeva
 */

#include "FilledVector.h"

int FilledVector::getSum() {
  int sum = 0;
  for (int i = 0; i < storage.size(); ++i) {
    sum += storage[i];
  }
  return sum;
}

void FilledVector::addToVector(int number) {
  storage.push_back(number);
}

