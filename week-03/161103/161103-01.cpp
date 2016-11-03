  // Change the name of the computer to "Macbook Pro" and print all the stats
#include <string>
#include <iostream>

using namespace std;

struct Computer {
  string name;
  long int cpu_speed_hz;
  long int ram_size;
};

void print_computer (Computer& s) {
  cout << "Name: " << s.name << endl;
  cout << "CPU speed: " << s.cpu_speed_hz << endl;
  cout << "Ram size: " << s.ram_size << endl;
}

int main() {
  Computer computer = {"Macbook", 3.2e9, 8e9};
  computer.name = "Macbook Pro";
  Computer computer2 = {"Dell", 2e9, 8e9};

  print_computer(computer);
  cout << "mine is: " << endl;
  print_computer(computer2);

  return 0;
}
