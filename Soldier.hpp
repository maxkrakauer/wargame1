#pragma once
#include <iostream>
   
    class Soldier{

        public:
        enum soltype {soldier, footcom, footer};

        
        public:
        int _player;
        soltype _soltype;
        int _points;

        public:
        Soldier(){}

        Soldier(int player){
            _player=player;
            _soltype=soldier;
        }

        public:

        virtual void attack(Soldier* soldier){};

        virtual void reduce(Soldier* soldier){};

        virtual void recover(){};

       
    };
