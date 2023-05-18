#include "Character.hpp"

namespace ariel{
    character::character(string _name, Point location, int health):name(_name), place(location), life(health){};
    bool character::isAlive(){
        return 0;
    };
    double character::distance(character& other_char){
        return 0;
    };
    void character::hit(int dam){};
    string character:: print(){return "";} ;
}

            