#include "Team2.hpp"
#include "L_team.hpp"
#include <iostream>


namespace ariel
{ 
Team2::Team2(Character* cha): L_team(cha){
        this->add(cha);
    }
    void Team2::add(Character* cha){
        this->teamates.push_back(cha);
    }
    void Team2::attack(L_team *enm){}
    int Team2::stillAlive()
    {
        return 0;
    }
    void Team2::print()
    {
        
    }

}