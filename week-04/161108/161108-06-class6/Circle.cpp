
#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;

Circle::Circle(float radius) {
    this->radius = radius;
  }
float Circle::get_circumference() {
    return 2 * radius * pi;
  }
float Circle::get_area() {
    return radius * radius * pi;
  }


