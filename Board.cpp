//#pragma once

#include <string>
#include <vector>
#include <stdexcept>
#include "Board.hpp"
#include "Soldier.hpp"


namespace WarGame{




    Soldier*& Board::operator[](std::pair<int,int> location){

    }
    
    
    Soldier* Board::operator[](std::pair<int,int> location) const{

    }
    
    
    void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction){

    }

    
    bool Board::has_soldiers(uint player_number) const{
        
    }


}