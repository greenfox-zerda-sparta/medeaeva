#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Fruit.h"
#include <string>

//Pass test
TEST_CASE("getApple2 Apple") {
  Fruit fruit2;
  REQUIRE(fruit2.getApple() == "apple");
}

//Fail test
TEST_CASE("getApple Apple") {
  Fruit fruit;
  REQUIRE(fruit.getApple() == "pear");
}

