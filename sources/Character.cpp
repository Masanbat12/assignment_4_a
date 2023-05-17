#include "Character.hpp"

namespace ariel{
    Character::Character(string _name, Point location, int health):name(_name),place(location),life(health){};
    bool Character::isAlive(){
        return 0;
    };
    double Character::distance(Character& other_char){
        return 0;
    };
    void Character::hit(int dam){};
    string Character:: print(){return "";} ;
}

            