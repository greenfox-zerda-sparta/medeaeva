
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Fibonacci.h"

TEST_CASE("Fibonacci_index()"){
  Fibonacci myFibonacci;
  REQUIRE(myFibonacci.Fibonacci_index(4) == 3);
}

TEST_CASE("Fibonacci_index()" "Index 0"){
  Fibonacci myFibonacci;
  REQUIRE(myFibonacci.Fibonacci_index(0) == 0);
}

TEST_CASE("Fibonacci_index()" "Index -1"){
  Fibonacci myFibonacci;
  REQUIRE_THROWS(myFibonacci.Fibonacci_index(-1));
}

TEST_CASE("Fibonacci_index()" "Index -1 exception"){
  Fibonacci myFibonacci;
 // REQUIRE_THROWS_AS(fibonacci.Fibonacci_index(-1) , const char*);
  REQUIRE_THROWS_WITH(myFibonacci.Fibonacci_index(-1), "wrong index");
}
