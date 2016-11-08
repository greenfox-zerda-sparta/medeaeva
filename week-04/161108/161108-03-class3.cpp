  // Create a method on the Student class called "greet" that returns a string
  // like: "Hello my name is: <student name>"

#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
    Student(string name, unsigned int age) {
          this->age = age;
          this->name = name;
        }

    void SetName (string x) {
      name = x;
    }

    string GetName() {
      return name;
    }

    string GreetStudent() {
      return "Hello my name is: " + name;
    }
};

int main() {
  Student so;
  so.SetName("John");
  so.GetName;
  cout << so.GreetStudent() << endl;
  return 0;
}

