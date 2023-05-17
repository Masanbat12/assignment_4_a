#pragma once
#include "Character.hpp"

namespace ariel{
    class Cowboy: public Character{
        private:
            int bullets;
        public:
            Cowboy(string name, Point position);
            void shoot(Character*);
            bool hasboolets();
            void reload();
            string print();
            
    };
}