/*
 * TB.h
 *
 *  Created on: 2016.11.16.
 *      Author: medeaeva
 */

#ifndef TB_H_
#define TB_H_

#include "task.h"

class TaskBindzsi {
public:
  TaskBindzsi ();
  void add_task(Task& task);
  //void change_status(Task& task, int status);
/*  float get_artist_rating(std::string artist);
  float get_genre_rating (std::string genre); */
  ~TaskBindzsi ();
private:
  Task** tasks;
  unsigned int task_count;

};

#endif /* TB_H_ */
