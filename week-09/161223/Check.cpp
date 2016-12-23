#include "Check.h"

Check::Check() {
  this->win_player_number = 1;
}

bool Check::horizontal(Board& board) {
  bool exit_if_false = true;
  unsigned int counter = 0;
  for (unsigned int i = 0; i < board.get_board().size(); ++i) {
    for (unsigned int j = 0; j < board.get_board()[i].size(); ++j) {
      if (board.get_board()[i][j] == win_player_number) {
        counter++;
        if (counter == 5) {
          this->win_case.first = 'h';
          this->win_case.second = j;
          this->win_player_number = board.get_board()[i][j];
          return true;
        }
      }
      else {
        counter = 0;
      }
    }
  }
  if (!exit_if_false) {
    return false;
  }
  else {
    exit_if_false = false;
    win_player_number = 2;
    horizontal(board);
  }
  return false;
}

bool Check::vertical(Board& board) {
  unsigned int counter = 0;
  unsigned int lines;
  for (unsigned int j = 0; j < board.get_board()[2].size(); ++j) {
    lines = 2 + 1;
    if (board.get_board()[2][j] != 0) {
      counter++;
      while (19 - 2 - lines > 4) {
        if (board.get_board()[lines][j] != 0) {
          counter++;
          //std::cout << "the counter is: " << counter << std::endl;
        }
        lines++;
      }
      counter = 0;
    }
  }
  return false;
}

//REfactor!!
bool Check::diagonal(Board& board) {
  bool exit_if_false = true;
  unsigned int counter = 0;
  for (unsigned int i = 0; i < board.get_board().size(); ++i) {
    for (unsigned int j = 0; j < board.get_board()[i].size(); ++j) {
      if (board.get_board()[i][j] == win_player_number) {
        counter++;
        if (counter == 5) {
          this->win_case.first = 'h';
          this->win_case.second = j;
          this->win_player_number = board.get_board()[i][j];
          return true;
        }
      }
      else {
        counter = 0;
      }
    }
  }
  if (!exit_if_false) {
    return false;
  }
  else {
    exit_if_false = false;
    win_player_number = 2;
    horizontal(board);
  }
  return false;
}

std::pair<char, int> Check::get_win_case() {
  return this->win_case;
}

unsigned int Check::get_win_player_number() {
  return this->win_player_number;
}
