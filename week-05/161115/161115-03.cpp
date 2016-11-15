  // Open a file called "third-exercise.txt"
  // Write numbers from 0 to 20 into the file each in a new line

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {

  ofstream mfile("third-exercise.txt");

  if (mfile.is_open()) {
    for( int a = 0; a < 21; ++a ) {
        mfile << a << endl;
     }
  }
  else {
    cout << "something is wrong with ur files" << endl;
  }

  mfile.close();

  return 0;
}

