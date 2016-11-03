// Write a function called "get_surface" that takes a RectangularCuboid
// and returns it's surface

// Write a function called "get_volume" that takes a RectangularCuboid
// and returns it's volume

#include <string>
#include <iostream>

using namespace std;

struct RectangularCuboid {
  double a;
  double b;
  double c;
};

int get_volume (RectangularCuboid& s);

int get_surface (RectangularCuboid& s);

void print_RectangularCuboid (RectangularCuboid& s);

int main() {
	RectangularCuboid teglatest = {3, 4, 5};

	cout << "The Rectangular Cuboid:" << endl;

	print_RectangularCuboid(teglatest);

	cout << "The volume is: " << get_volume(teglatest) << " cm3" << endl;
	cout << "The surface is: " << get_surface(teglatest) << " cm2" << endl;

  return 0;
}

// Functions:

int get_volume (RectangularCuboid& s) {
  int volume = s.a * s.b * s.c;
  return volume;
}

int get_surface (RectangularCuboid& s) {
  int surface = 2 * ((s.a * s.b) + (s.a * s.c) + (s.b * s.c));
  return surface;
}

void print_RectangularCuboid (RectangularCuboid& s) {
  cout << "A is: " << s.a << " cm" << endl;
  cout << "B is: " << s.b << " cm" << endl;
  cout << "C is: " << s.c << " cm" << endl;
}

