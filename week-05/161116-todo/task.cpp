/*
 * task.cpp
 *
 *  Created on: 2016.11.16.
 *      Author: medeaeva
 */
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "task.h"

using namespace std;

Task::Task(std::string task_description) {
  this ->task_description = task_description;
  this ->status = 1;
}

std::string Task::get_task_descreption() {
  return task_description;
}

string Task::get_stats() {
  if (status == 1) {
    return "Things to do today: " + task_description;
  }
  else {
   return "No todos for today! :)";
  }
}

Task::~Task () {
  // TODO Auto-generated destructor stub
}

