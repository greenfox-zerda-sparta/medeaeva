#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include "help.h"
#include "task.h"
#include "TB.h"

using namespace std;

int main (int argc, char* argv[]) {

  Help h;
  h.print_help();



  Task t1("create a todo app");

  cout << t1.get_stats() << endl;

  TaskBindzsi mTasks;

  mTasks.add_task(t1);

  return 0;
  }
