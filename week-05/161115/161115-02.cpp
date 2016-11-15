  // Open a file called "second-exercise.txt"
  // Read the content of the file and print it to the terminal window

#include <iostream>
#include <fstream>

using namespace std;

int main() {
  /*ofstream mfile("second-excercise.txt");
  mfile << "apple \n"; */

  ifstream mfile2("second-excercise.txt");
  string line;

  if (mfile2.is_open()) {
    while (mfile2 >> line) {
      cout << line << endl;
      }
    }
  else{
     cout << "the file is closed" << endl;
   }

  mfile2.close();


  return 0;
}
