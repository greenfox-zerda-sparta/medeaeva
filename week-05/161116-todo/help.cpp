/*
 * help.cpp
 *
 *  Created on: 2016.11.16.
 *      Author: medeaeva
 */
#include "help.h"
#include <iostream>
#include <string>

using namespace std;

/*Help::Help () {
  // TODO Auto-generated constructor stub
  
}
*/
void Help::print_help() {
  cout << "CLI Todo application" << endl;
  cout << "____________________" << endl;
  cout << " " << endl;
  cout << "Command line arguments:" << endl;
  cout << " -l   Lists all the tasks" << endl;
  cout << " -a   Adds a new task" << endl;
  cout << " -r   Removes an task" << endl;
  cout << " -c   Completes an task" << endl;
  cout << "____________________" << endl;
  cout << " " << endl;
  cout << "What u wanna do? Gimme a command" << endl;
  cout << " " << endl;
}
/*
Help::~Help () {
  // TODO Auto-generated destructor stub
}
*/
