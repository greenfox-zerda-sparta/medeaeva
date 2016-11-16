/*
 * TB.cpp
 *
 *  Created on: 2016.11.16.
 *      Author: medeaeva
 */
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>



#include "TB.h"

TaskBindzsi::TaskBindzsi () {
  this->task_count = 0;
  this->tasks = NULL;
}

void TaskBindzsi::add_task(Task& task) {
  Task** temp = new Task*[task_count + 1];
  if (tasks != NULL) {
    for (unsigned int i = 0; i < task_count; ++i) {
      temp[i] = tasks[i];
    }
  }
  temp[task_count] = &task;
  delete[] tasks;
  tasks = temp;
  ++task_count;
}
/*
void TaskBindzsi::change_status(Task& task, int status) {

}
*/

TaskBindzsi::~TaskBindzsi () {

}

