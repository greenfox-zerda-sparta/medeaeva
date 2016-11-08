#include <iostream>
#include <string>
#ifndef STUDENT_H_
#define CLASS_H_

using namespace std;

class Student {
public:
  Student(string name);
  ~Student();
  void add_grade(int grade);
  double get_average();
  void setname (string name);
  string getname ();

private:
  string name;
  int array_size = 10;
  int* grades = new int[array_size];
  int grade_count = 0;
};

#endif /* STUDENT_H_ */
