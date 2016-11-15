//!!! boolean is missing !!!

  // Write a function that copies a file to an other
  // It should take the filenames as parameters
  // It should return a boolean that shows if the copy was successful

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


string file_content_reader (string fileName);

void write_string_to_file(string file, string content);



int main() {

  string temp_string;

  temp_string = file_content_reader("eight-exercise-1.txt");

  write_string_to_file("eight-exercise-2.txt", temp_string);

/* checking:

  ifstream mfile3("eight-exercise-2.txt");

  string item2;

  while (mfile3 >> item2) {
    cout << item2 << " ";
  }
*/

  return 0;
}


string file_content_reader (string fileName) {
  ifstream mfile;
  mfile.open(fileName.c_str());

    string content;
    string temp;

    while(mfile >> temp) {
      content += temp + " ";

    }

    mfile.close();
    return content;

  }

void write_string_to_file(string file, string content) {
  ofstream mfile2(file.c_str());

  mfile2 << content;

  mfile2.close();
}
