/*
 * Fruit.cpp
 *
 *  Created on: 2016.12.19.
 *      Author: medeaeva
 */

#include "Fruit.h"

Fruit::Fruit() {
  this->fruit = "apple";
}


Fruit::~Fruit() {
}

std::string Fruit::getApple() {
  return fruit;
}
