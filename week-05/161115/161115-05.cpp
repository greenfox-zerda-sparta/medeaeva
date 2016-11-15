  // Write a program that prints a content of a file called "fifth-exercise.txt"
  // If it could not open the file it should write: "Could not open the file" to the standard error
  // The program should return 2 if there where an error


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ifstream mfile2("fifth-exercise.txt");

  string item;

  if (mfile2.is_open()) {
    while (mfile2 >> item) {
        cout << item << endl;
      }
    return 0;
    }
  else {
    cerr << "Could not open the file" << endl;
    return 2;
   }

}
