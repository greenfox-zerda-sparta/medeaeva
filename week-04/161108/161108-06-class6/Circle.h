#include <iostream>
#include <string>
using namespace std;

#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle {
  public:
    Circle(unsigned float radius);
    unsigned float get_circumference();
    unsigned float get_area();

  private:
    unsigned float radius;
    const float pi = 3.14;
};

#endif /* CIRCLE_H_ */
