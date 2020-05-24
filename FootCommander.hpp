#pragma once
#include "FootSoldier.hpp"


class FootCommander: public FootSoldier{

    public:
    FootCommander(int player): FootSoldier(player){
        _soltype=footcom;
    }

   void attack(Soldier* soldier);

   void reduce(Soldier* soldier);

   void recover();

    
};