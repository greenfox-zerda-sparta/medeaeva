#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


string* split(string text, int x) throw (const char*);

int main() {
  cout << "give me a text" << endl;
  string text;
  getline (cin, text);

  cout << "give me a character" << endl;
  string letter;
  getline (cin, letter);

  string::size_type pos = text.find_first_of(letter);

  int i_pos = std::stoi (text,&pos);


  try {
      string* input1 = split(text, i_pos);
      cout << "First part: " << input1[0] << endl;
      cout << "Second part: " << input1[1] << endl;

  catch (const char* excp) {
      cerr << "Exception: " << excp << endl;
  }
  return 0;
}

string* split(string text, int x) throw (const char*) {

  string* parts = new string[2];
  if( x !> 0 ) {
    throw "house on fire";
  }
  for(int i = 0; i < x; i++) {
    parts[0] += text[i];
  }
  for(int j = x; j < y; ++j) {
    parts[1] += text[j];
  }
   return parts;
}
