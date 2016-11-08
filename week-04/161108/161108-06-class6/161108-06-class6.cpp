    // Create a `Circle` class that takes it's radius as constructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;

int main() {

  Circle co(5);

  cout << co.get_circumference() << endl << co.get_area() << endl;

  return 0;
}
