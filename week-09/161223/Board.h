#ifndef BOARD_H_
#define BOARD_H_

#include <vector>
#include <string>



class Board {
private:
  const unsigned int Board_size;
  std::vector<std::vector <unsigned int> > board;
public:
  Board(unsigned int);
  unsigned int get_board_coordinates(unsigned int, unsigned int);
  unsigned int set_board_coordinates(unsigned int, unsigned int, unsigned int);
  std::vector<std::vector <unsigned int> > get_board();
};


#endif
