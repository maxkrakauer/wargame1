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
  board[{1,0}] = new FootSoldier(1);
	board[{1,1}] = new FootCommander(1);
  assert(board.has_soldiers(1));

  assert(!board.has_soldiers(2));
   
  board[{3,2}] = new FootSoldier(2);
  board[{2,3}] = new FootSoldier(2);
	board[{2,2}] = new FootCommander(2);
  assert(board.has_soldiers(2));

  board.move(1, {1,1}, Board::MoveDIR::Up);

  CHECK(to_string(board[{2,2}]->_points)==string("130"));

  board.move(2, {3,2}, Board::MoveDIR::Left);

  CHECK(to_string(board[{2,1}]->_points)==string("140"));



  cout<<"all good so far"<<endl;

	





}

  





/*
   
   double d=solve(2*x==2);
   string s=to_string(d);
   CHECK(s==string("1.0"));

   CHECK(to_string(solve(2*x==2))==string("1.0"));
   CHECK(to_string(solve(2*(x^2)==8))==string("2.0") || 
   to_string(solve(2*(x^2)==8))==string("-2.0"));

   */

