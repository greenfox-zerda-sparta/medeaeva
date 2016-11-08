  // Create a method on student that takes a string as an argument and
  // changes it's name property

#include <iostream>
#include <string>

using namespace std;

class Student {
  private:
    string name;
    unsigned int age;
  public:
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
    string greet() {
      return "Hello my name is: " + this->name;
    }
    void SetName (string x) {
      name = x;
    }
    string Getname () {
      return name;
    }

};

int main() {
  Student so;
  so.SetName("john");
  cout << greet() << endl;

  return 0;
}
