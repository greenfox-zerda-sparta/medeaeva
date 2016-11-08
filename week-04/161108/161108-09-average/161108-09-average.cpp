    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades

#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main() {
  Student so("John");
  so.add_grade(3);
  so.add_grade(4);
  so.add_grade(2);
  so.add_grade(5);

  cout << so.getname() << " has the average " << so.get_average();

  return 0;
}
