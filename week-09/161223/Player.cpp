#include "Player.h"

Player::Player(std::string name1) {
  this->name = name1;
  player_number = 1;
}

Player::Player(std::string name1, Player& player_other) {
  this->name = name1;
  if (player_other.get_player_number() == 1) {
    this->player_number = 2;
  }
  else {
    this->player_number = 1;
  }
}

std::string Player::get_name() {
  return this->name;
}

unsigned int Player::get_player_number() {
  return this->player_number;
}

bool Player::pick(Board& board, unsigned int x, unsigned int y) {
  if (board.set_board_coordinates(x, y, player_number) != 2000) {
    board.set_board_coordinates(x, y, player_number);
    return true;
  }
  return false;
}
