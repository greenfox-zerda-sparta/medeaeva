  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


class Student {
  public:
    string name;
    unsigned int age;
};

int main() {
  Student studentobject;
  studentobject.name = "John";
  studentobject.age = 21;

  cout << "The name of the student is: " << studentobject.name << " and the student is " << studentobject.age << " years old." << endl;

  return 0;
}
