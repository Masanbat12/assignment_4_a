#include "Character.hpp"
#ifndef NINJA_HPP
#define NINJA_HPP

namespace ariel
{
    class Ninja: public character
    {
        private:
            int speed;
        public:
            Ninja(string _name, Point location, int health, int _speed);
            void slash(character* enemy);
            void move(character* enemy);
            int g_Speed();
    };
}
#endif