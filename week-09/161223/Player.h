
#ifndef PLAYER_H_
#define PLAYER_H_

#include "Board.h"
#include <string>

class Player {
private:
  std::string name;
  unsigned int player_number;
public:
  Player(std::string);
  Player(std::string, Player&);
  std::string get_name();
  unsigned int get_player_number();
  bool pick(Board&, unsigned int, unsigned int);

};

#endif /* PLAYER_H_ */
