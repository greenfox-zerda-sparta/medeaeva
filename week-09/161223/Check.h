
#ifndef CHECK_H_
#define CHECK_H_
#include "Board.h"
#include "Player.h"
#include <utility>


class Check {
private:
  std::pair<char, int> win_case;
  unsigned int win_player_number;
public:
  Check();
  bool horizontal(Board&);
  bool vertical(Board&);
  bool diagonal(Board&);
  std::pair<char, int> get_win_case();
  unsigned int get_win_player_number();
};

#endif /* CHECK_H_ */



