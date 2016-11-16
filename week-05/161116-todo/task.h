/*
 * task.h
 *
 *  Created on: 2016.11.16.
 *      Author: medeaeva
 */

#ifndef TASK_H_
#define TASK_H_

class Task {
public:
  Task(std::string task_description);
  std::string get_task_descreption();
  int status; // 1 - to do, 2 - completed
  std::string get_stats();
  ~Task ();
private:
  std::string task_description;
};

#endif /* TASK_H_ */
