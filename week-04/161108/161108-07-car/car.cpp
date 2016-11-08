/*
 * car.cpp
 *
 *  Created on: 2016.11.08.
 *      Author: medeaeva
 */

#include <iostream>
#include <string>
#include "car.h"

using namespace std;

Car::Car(string type, float km) {
  this->type = type;
  this->km = km;
}

void Car::run(float added_km) {
  km += added_km;
}

float Car::get_km() {
  return km;
}


