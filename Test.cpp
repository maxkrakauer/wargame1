#include "doctest.h"
#include "Board.hpp"
#include <string>
#include <string.h>
using namespace std;
#include <iostream>
#include <complex>
#include "FootSoldier.hpp"
#include "FootCommander.hpp"
#include <cassert>
using namespace WarGame;

TEST_CASE(""){
   
    //RealVariable x;

  
  Board board(4,4);

  assert(!board.has_soldiers(1));

  board[{0,1}] = new FootSoldier(1);





}

  





/*
   
   double d=solve(2*x==2);
   string s=to_string(d);
   CHECK(s==string("1.0"));

   CHECK(to_string(solve(2*x==2))==string("1.0"));
   CHECK(to_string(solve(2*(x^2)==8))==string("2.0") || 
   to_string(solve(2*(x^2)==8))==string("-2.0"));

   */

