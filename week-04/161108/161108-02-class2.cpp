  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21 with it's constructor

#include <iostream>
#include <string>

using namespace std;

class Student {
   public:
   Student() {
   name = "John";
   age = 21;
   }
    string name;
    unsigned int age;
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
};

int main() {

  Student so;
  cout << "Student name: " << so.name << ", age: " << so.age << endl;

  return 0;
}
