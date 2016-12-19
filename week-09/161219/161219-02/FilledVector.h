/*
 * FilledVector.h
 *
 *  Created on: 2016.12.19.
 *      Author: medeaeva
 */

#ifndef FILLEDVECTOR_H_
#define FILLEDVECTOR_H_
#include <vector>

class FilledVector {
private:
  std::vector<int> storage;
public:
  FilledVector() {};
  int getSum();
  void addToVector(int);
  ~FilledVector() {};
};

#endif /* FILLEDVECTOR_H_ */
