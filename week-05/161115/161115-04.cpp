  // Open a file called "fourth-exercise.txt"
  // Print all of its lines to the terminal window

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ifstream mfile2("fourth-exercise.txt");

  string item;

  if (mfile2.is_open()) {
    while (mfile2 >> item) {
        cout << item << endl;
      }
    }
  else{
    cout << "the file is closed" << endl;
   }

  mfile2.close();

  return 0;
}
