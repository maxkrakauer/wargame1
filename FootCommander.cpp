

//#pragma once

#include <string>
#include <vector>
#include <stdexcept>
#include "FootCommander.hpp"



   
   void FootCommander::attack(Soldier* soldier){
       reduce(soldier);
   }

   void FootCommander::reduce(Soldier* soldier){
       soldier->_points-=20;
   }

   void FootCommander::recover(){
       _points=150;
   }

