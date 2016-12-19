#ifndef FRUIT_H_
#define FRUIT_H_

#include <string>

class Fruit {
public:
  Fruit();
  ~Fruit();
  std::string getApple();
private:
  std::string fruit;
};

#endif /* FRUIT_H_ */
