  // Write a function that reads the content of a file and returns it as a string
  // It should take the filename as a string parameter

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string file_content_reader (string fileName);

int main() {

  cout << file_content_reader("sixth-exercise.txt");
  return 0;

}

string file_content_reader (string fileName) {
  ifstream mfile;
  mfile.open(fileName.c_str());

  if (!mfile.is_open()) {
    cerr << "file is already open" << endl;

  }
  else {
    string content;
    string temp;

    while(mfile >> temp) {
      content += temp + " ";

    }

    mfile.close();
    return content;

  }
}
