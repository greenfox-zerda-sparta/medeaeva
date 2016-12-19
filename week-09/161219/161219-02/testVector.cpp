
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "FilledVector.h"

TEST_CASE("empty list") {
  FilledVector myVector;
  REQUIRE(myVector.getSum() == 0);
}

TEST_CASE("one element"){
  FilledVector myVector;
  myVector.addToVector(5);
  REQUIRE(myVector.getSum() == 5);
}

TEST_CASE(" multiple element") {
  FilledVector myVector;
  myVector.addToVector(1);
  myVector.addToVector(2);
  myVector.addToVector(3);
  myVector.addToVector(4);
  REQUIRE(myVector.getSum() == 10);
}
