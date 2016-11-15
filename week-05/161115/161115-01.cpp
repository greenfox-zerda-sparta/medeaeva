  // Open a file called "first-exercise.txt"
  // Write your name in it as a single line

#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ofstream mfile("first-excercise.txt");
  mfile << "Eva Medea Ferencz \n";

  return 0;
}
