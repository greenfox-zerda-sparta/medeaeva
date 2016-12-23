#include "Board.h"


Board::Board(unsigned int size) : Board_size(size) {
  board.resize(Board_size);
  for (unsigned int i = 0; i < board.size(); i++) {
    board[i].resize(Board_size, 0);
  }
}

unsigned int Board::get_board_coordinates(unsigned int x, unsigned int y) {
  if (x < Board_size && y < Board_size && x >= 0 && y >= 0) {
    return board[y][x];
  }
  else {
    return 1000;
  }
}

unsigned int Board::set_board_coordinates(unsigned int x, unsigned int y, unsigned int value) {
  if (this->get_board_coordinates(x, y) != 1000 && this->get_board_coordinates(x, y) == 0) {
    board[y][x] = value;
    return value;
  }
  else {
    return 2000;
  }
}

std::vector<std::vector <unsigned int> > Board::get_board() {
  return board;
};
