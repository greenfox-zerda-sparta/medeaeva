  // Write a function that writes a string to a file
  // It should take the filename and the content as a string parameter


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void write_string_to_file(string file, string content);

int main() {

  write_string_to_file("seventh-exercise.txt","u got this");

/* checking:

  ifstream mfile2("seventh-exercise.txt");

  string item;

  while (mfile2 >> item) {
    cout << item << " ";
  }
*/

  return 0;
}

void write_string_to_file(string file, string content) {
  ofstream mfile(file.c_str());

  mfile << content;

  mfile.close();
}
