/*
 * car.h
 *
 *  Created on: 2016.11.08.
 *      Author: medeaeva
 */


#include <iostream>
#include <string>
using namespace std;

#ifndef CAR_H_
#define CAR_H_


class Car {
public:
  Car(string type, float km);
  void run(float added_km);
  float get_km();
private:
  string type;
  float km;
};

#endif /* CAR_H_ */
