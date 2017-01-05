// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.


#include <iostream>
#include <string>

using namespace std;

string x_changer (string word, unsigned int word_lenght);

int main() {
  string input_text;
  unsigned int input_text_lenght;
  cout << "plz give me a text to work with!" << endl;
  cin >> input_text;
  cout << "Here is the text where  all the lowercase 'x' chars have been changed to 'y' chars " << x_changer(input_text, input_text_lenght) << endl;
  return 0;
}

string x_changer (string word, unsigned int word_lenght) {
  if (word_lenght == word.length()) {
    return word;
  }
  if (word[word_lenght] == 'x') {
    word[word_lenght] = 'y';
  }
  word_lenght++;
  return x_changer (word, word_lenght);
}
